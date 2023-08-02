#include "main.h"
/**
 * print_binary - print the binary representation of n
 * @n: the value to print in binary
 *
 * Description: print the binary representation of n
 * Return: NOTHING
 */
void print_binary(unsigned long int n)
{
	int i;

	for (i = 63; n >> i == 0 && i > 0; )
		i--;
	for (; i >= 0; i--)
	{
		_putchar((n >> i) + '0');
		n = n - ((n >> i) << i);
	}
}
