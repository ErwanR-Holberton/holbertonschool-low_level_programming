#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int i, numA = 0, numB = 1;
	unsigned long int highA = 0, highB = 0, tempo, hightempo = 0;

	for (i = 0; i < 98; i++)
	{
		tempo = numA + numB;
		hightempo = highA + highB;
		if (tempo > 100000000000000)
		{
			hightempo = hightempo + tempo / 100000000000000;
			tempo = tempo % 100000000000000;
		}
		numA = numB;
		highA = highB;
		numB = tempo;
		highB = hightempo;
		if (highB != 0)
			printf("%lu", highB);
		printf("%lu", numB);
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
