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
	int n, m, o, p;

	for (n = 0 ; n <= 9 ; n++)
	{
		for (m = 0 ; m <= 9 ; m++)
		{
			for (o = 0 ; o <= 9 ; o++)
			{
				for (p = 0 ; p <= 9 ; p++)
				{
					putchar(n + 48);
					putchar(m + 48);
					putchar(' ');
					putchar(o + 48);
					putchar(p + 48);
					if ((n == 9) && (m == 9) && (o == 9) && (p == 9))
					{

					}
					else
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
