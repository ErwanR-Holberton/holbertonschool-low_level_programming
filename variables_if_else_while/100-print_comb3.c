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

	for (n = 0 ; n <= 9 ; n++)
	{
		for (m = n ; m <= 9 ; m++)
		{
			if (n != m)
			{
				putchar(n + 48);
				putchar(m + 48);
				if (n != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
