#include <stdio.h>
#include "main.h"

/**
 * _strspn - Entry point
 *
 * gets the length of a prefix substring.
 *
 *
 * @s : point into the area where the string is
 * @accept : pointer to list of valid char
 *
 *
 * Return: pointer to c
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, valid_char = 0;

	while (s[i] != '\n')
	{
		valid_char = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				valid_char = 1;
			j++;
		}
		if (!valid_char)
			return (i);
		i++;
	}
	return (i - 1);
}
