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
	int n, m, o;

	for (n = 0 ; n <= 9 ; n++)
	{
		for (m = n ; m <= 9 ; m++)
		{
			for (o = m ; o <= 9 ; o++)
			{
				if ((n != m) && (m != o) && (n != o))
				{
					putchar(n + 48);
					putchar(m + 48);
					putchar(o + 48);
					if (n != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
