#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 1, nminus1 = 0, count, tmp;

	for (count = 0; count <= 50; count++)
	{
		tmp = n + nminus1;
		nminus1 = n;
		n = tmp;
		printf("%d",n);
		if (count != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
