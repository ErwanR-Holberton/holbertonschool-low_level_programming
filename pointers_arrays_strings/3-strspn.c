#include "main.h"
#include <stdio.h>
/**
 * _strspn - check the code
 * @s: start of string
 * @accept: string to find
 *
 * Return: number of chars copied
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				break;
			else if (accept[j + 1] == '\0')
				return (i);

	return (i);
}
