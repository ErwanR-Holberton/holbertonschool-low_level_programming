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
	int power10 = 1;
	unsigned int NBecomesPositive = -n;

	if (n < 0)
	{
		_putchar('-');
		n = NBecomesPositive;
	}

	for (; n >= power10 * 10 || -n >= power10 * 10 ; )
		power10 = power10 * 10;

	while (power10 > 0)
	{
		if (n < 0)
			_putchar(-(n / power10 % 10) + '0');
		else
			_putchar(n / power10 % 10 + '0');
		power10 = power10 / 10;
	}

}
