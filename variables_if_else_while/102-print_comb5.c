#include <stdio.h>

/**
 * main - Entry point
 *
 * prints 0 - 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 0 ; n <= 99 ; n++)
	{
		for (m = n ; m <= 99 ; m++)
		{
			putchar(n / 10 + 48);
			putchar(n % 10 + 48);
			putchar(' ');
			putchar(m / 10 + 48);
			putchar(m % 10 + 48);
			if ((n != 99) || (m != 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
