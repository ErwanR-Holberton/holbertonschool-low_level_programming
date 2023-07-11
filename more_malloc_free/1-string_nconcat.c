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
	int size1 = 0, size2 = 0, n2 = n;

	if (s1 != 0)
		for (; s1[size1] != '\0';)
			size1++;

	if (s2 != 0)
		for (; s2[size2] != '\0';)
			size2++;

	if (size2 > n2)
	{
		newstr = malloc(size1 + n + 1);
		size2 = n2;
	}
	else
		newstr = malloc(size1 + size2 + 1);

	if (newstr == NULL)
		return (0);

	if (size2 != 0)
		for (; size2 >= 0; size2--)
			newstr[size1 + size2] = s2[size2];

	if (size1 != 0)
		for (size1--; size1 >= 0; size1--)
			newstr[size1] = s1[size1];

	return (newstr);
}
