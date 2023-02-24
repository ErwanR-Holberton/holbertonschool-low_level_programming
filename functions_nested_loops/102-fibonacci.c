#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, numA = 0, numB = 1, tempo;

	for (i = 0; i < 50; i++)
	{
		tempo = numA + numB;
		numA = numB;
		numB = tempo;
		printf("%lu", numB);
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
