#include "main.h"

/**
 * print_last_digit - Entry point
 * @n : n is tested (+ - or 0 ?)
 * Return: if lowercase
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar(((n % 10) * -1) + 48);
		return ((n % 10) * -1);
	}
	else
	{
		_putchar((n % 10) + 48);
		return (n % 10);
	}
}
