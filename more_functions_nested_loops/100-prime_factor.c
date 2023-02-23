#include <stdio.h>

/**
 * main - Entry point
 *
 * print primes factors
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n = 612852475143, i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			/*printf("%d ", n);*/
			n = n / i;
			/*printf("%d ", n);*/
			/*printf("%d\n", i);*/
			i = 1;
		}
	}
	printf("%lu\n", n);
	return (0);
}
