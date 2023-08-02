#include "main.h"
/**
 * get_bit - get the bit at desired index
 * @n: the value to get a bit of
 *
 * Description: get the bit at desired index
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i = 0;

	i = n >> index;
	i = i % 2;
	return (i);
}
