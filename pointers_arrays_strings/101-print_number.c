#include "main.h"
#include <stdio.h>
/**
 * print_number - check the code
 * @n: number to print
 *
 * Return: NOTHING
 */
void print_number(int n)
{
	unsigned int power10 = 1;
	unsigned int NBecomesPositive = -n, n2 = n;

	if (n < 0)
	{
		_putchar('-');
		n2 = NBecomesPositive;
	}

	for (; n2 >= power10 * 10; )
		power10 = power10 * 10;

	while (power10 > 0)
	{
		_putchar(n2 / power10 % 10 + '0');
		power10 = power10 / 10;
	}

}
