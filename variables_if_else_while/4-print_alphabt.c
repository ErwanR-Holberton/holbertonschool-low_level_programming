#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the alphabet in lowercase exept e & q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 'a' ; n <= 'z' ; n++)
	{
		if (n != 'q')
		{
			if (n != 'e')
			{
				putchar(n);
			}
		}
	}

	printf("\n");

	return (0);
}
