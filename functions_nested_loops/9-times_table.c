#include "main.h"

/**
 * times_table - Entry point
 * print the time table
 *
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9 ; b++)
		{
			if (a * b >= 10)
				_putchar(a * b / 10 + 48);
			else
			{
				if (b != 0)
				{
					_putchar(' ');
				}
			}
			_putchar(a * b % 10 + 48);
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
