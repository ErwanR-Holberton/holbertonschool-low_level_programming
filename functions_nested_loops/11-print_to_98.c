#include "main.h"

/**
 * print_to_98 - Entry point
 * print ints n - 98
 * @n : n is starting point
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 0)
		{
			_putchar('-');
			if (n <= -100)
			{
				_putchar((n / 100) * -1 + '0');
				_putchar(((n - 100) / 10) * -1 + '0' - 20);
			}
			else if (n <= -10)
				_putchar((n / 10) * -1 + '0');
			_putchar((n % 10) * -1 + '0');
		}
		else if (n >= 100)
		{
			_putchar(n / 100 + '0');
			_putchar((n - 100) / 10 + '0');
			_putchar(n % 10 + 48);
		}
		else if (n < 100)
		{
			if (n >= 10)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + 48);
		}
		else
			_putchar(n % 10 + '0');
		_putchar(',');
		_putchar(' ');
		if (n > 98)
			n--;
		else
			n++;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
