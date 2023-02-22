#include "main.h"

/**
 * print_triangle - Entry point
 * @n : is a number
 * print triangle n long
 *
 */
void print_triangle(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j >= (n - 1 - i))
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
