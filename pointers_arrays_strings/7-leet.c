#include <stdio.h>
#include "main.h"

/**
 * *leet - Entry point
 *
 * aeotl = 43071
 *
 * @a : pointer to first string
 *
 *
 * Return: pointer a
 */
char *leet(char *a)
{
	int i = 0, j = 0;
	char leetA[] = "AEOTL";
	char leeta[] = "aeotl";
	char leetnum[] = "43071";

	while (a[i] != '\0')
	{
		for (j = 0; leetA[j] != '\0'; j++)
		{
			if ((a[i] == leetA[j]) || (a[i] == leeta[j]))
				a[i] = leetnum[j];
		}
		i++;
	}
	return (a);
}
