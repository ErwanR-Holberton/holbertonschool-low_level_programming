#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - check the code
 * @n: print all numbers until n
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n > 98)
		for (; n >= 98; n--)
		{
			if (n >= 1000)
				_putchar(n / 1000 + '0');
			if (n >= 100)
				_putchar(n / 100 % 10 + '0');
			if (n >= 10)
				_putchar(n / 10 % 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
	else
		for (; n <= 98; n++)
		{
			if (n < 0)
				_putchar('-');
			if (n <= -100)
				_putchar(-n / 100 + '0');
			if (n <= -10)
				_putchar(-n / 10 + '0');
			if (n >= 10)
				_putchar(n / 10 + '0');
			if (n < 0)
				_putchar(-n % 10 + '0');
			else
				_putchar(n % 10 + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
}
