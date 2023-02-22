#include <stdio.h>

/**
 * main - Entry point
 *
 * print 0-100
 * replace multiples of 3 by fizz
 * replace multiples of 5 by buzz
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if ((i % 3 != 0) && (i % 5 != 0))
			printf("%d", i);
		printf(" ");
	}
	printf("\n");
	return (0);
}
