#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Entry point
 *
 * print sum of the diagonals
 *
 * @a : point to 2d array
 * @size : size of the array (it is 2D)
 *
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + size - i - 1];
	}
	printf("%d, %d\n", sum1, sum2);
}
