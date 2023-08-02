#include "main.h"
/**
 * get_bit - get the bit at desired index
 * @n: the value to get a bit of
 * @index: index of the bit we want | ex(1 byte) : [7 6 5 4 3 2 1 0]
 *
 * Description: get the bit at desired index
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index >= sizeof(long int) * 8)
		return (-1);
	i = n >> index;
	i = i % 2;

	return (i);
}
