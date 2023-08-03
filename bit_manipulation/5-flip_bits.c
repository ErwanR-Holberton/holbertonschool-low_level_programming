#include "main.h"
/**
 * flip_bits - how many bits do we need to change from n to m ?
 * @n: the initial value
 * @m: other value
 *
 * Description: how many bits do we need to change from n to m ?
 * Return: the number of bites to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int index = 63, count = 0;

	for (; index <= 63; index--)
	{
		if (n >> index != m >> index)
			count++;
		n = n - ((n >> index) << index);
		m = m - ((m >> index) << index);
	}

	return (count);
}
