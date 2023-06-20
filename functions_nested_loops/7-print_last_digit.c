#include "main.h"

/**
 * print_last_digit - check the code
 * @n: The number to print the la digit of
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	n = n * ((n>0) - (n<0));
	_putchar(n % 10 + '0');
	return (n % 10);
}
