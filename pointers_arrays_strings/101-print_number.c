#include <stdio.h>
#include "main.h"

/**
 * print_number - Entry point
 *
 * print number with putchar
 *
 * @n : number to print
 *
 *
 */
void print_number(int n)
{
	int num = n, lenght = 1, exposant = 1;

	for (lenght = 0; num / 10 != 0; lenght++)
	{
		num = num / 10;
		exposant *= 10;
	}
	num = n;
	if (n < 0)
	{
		num *= -1;
		_putchar('-');
	}
	for (; lenght >= 0; lenght--)
	{
		_putchar(num / exposant + '0');
		num = num - (num / exposant * exposant);
		exposant = exposant / 10;
	}

}
