#include "main.h"

/**
 * print_last_digit - check the code
 * @n: The number to print the la digit of
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = n * -1;
	_putchar(n + '0');
	return (n);
}
