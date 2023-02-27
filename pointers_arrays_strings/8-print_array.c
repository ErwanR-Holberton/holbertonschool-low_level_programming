#include <stdio.h>
#include "main.h"

/**
 * print_array - Entry point
 * @n : lenght
 * @a : points to string start
 * print half the string
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
