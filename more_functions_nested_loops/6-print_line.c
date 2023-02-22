#include "main.h"

/**
 * print_line - Entry point
 * @n : is a number
 * print n '_'
 *
 */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('-');
	}
	_putchar('\n');
}
