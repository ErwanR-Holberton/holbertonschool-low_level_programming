#include <stdio.h>
#include "main.h"

/**
 * *string_toupper - Entry point
 *
 * tr lower to upper
 *
 * @a : pointer to first string
 *
 *
 * Return: pointer a
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if ((a[i] >= 'a') && (a[i] <= 'z'))
			a[i] = a[i] - 'a' + 'A';
		i++;
	}
	return (a);
}
