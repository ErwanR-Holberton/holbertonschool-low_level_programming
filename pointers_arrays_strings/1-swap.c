#include "main.h"

/**
 * swap_int - Entry point
 *
 * @a : is a pointer
 * @b : is a pointer
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
