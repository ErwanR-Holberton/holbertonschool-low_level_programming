#include "main.h"
/**
 * clear_bit - set the bit to 0 at desired index
 * @n: the value to set a bit of
 * @index: index of the bit we want to set
 *
 * Description: set the bit to 0 at desired index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1, i = 0;

	if (index >= sizeof(long int) * 8)
		return (-1);
	for (i = 0; i < index; i++)
		mask *= 2;
	*n = *n & ~mask;

	return (1);
}
