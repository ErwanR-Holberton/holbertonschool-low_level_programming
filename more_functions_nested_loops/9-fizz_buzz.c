#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;

	for ( count = 1; count <= 100; count++)
	{
		if (count %3 == 0)
			printf("Fizz");
		else if (count %5 == 0)
			printf("Buzz");
		else
			printf("%d", count);
		if (count != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
