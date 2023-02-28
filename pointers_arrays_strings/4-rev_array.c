#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Entry point
 *
 * Concatenate
 *
 * @a : pointer to first string
 * @n : n of items in array
 *
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0, tempo = 0;

	if (n % 2)
		n = n - 1;
	for (i = 0; i <= n / 2 ; i++)
	{
		tempo = a[i];
		a[i] = a[n - i];
		a[n - i] = tempo;
	}
}
