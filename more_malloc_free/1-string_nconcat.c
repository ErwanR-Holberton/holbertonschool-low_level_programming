#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - check the code.
 *
 * Concatenate two strings but take only n bytes of s2
 *
 * @s1: string to cat
 * @s2: string to cat
 * @n: number of bytes
 * Return: Pointer to string or null if faillure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int size1 = 0, size2 = 0;
	int i;

	if (s1 != 0)
		for (; s1[size1] != '\0';)
			size1++;

	if (s2 != 0)
		for (; s2[size2] != '\0';)
			size2++;

	if (size2 > n)
	{
		size2 = n - 1;
		newstr = malloc(size1 + size2 + 1);
	}
	else
		newstr = malloc(size1 + size2 + 1);

	if (newstr == NULL)
		return (0);

	if (size2 != 0)
		for (i = size2; i >= 0; i--)
			newstr[size1 + i] = s2[i];

	if (size1 != 0)
		for (i = size1 - 1; i >= 0; i--)
			newstr[i] = s1[i];

	return (newstr);
}
