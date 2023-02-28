#include <stdio.h>
#include "main.h"

/**
 * _strprbk - Entry point
 *
 * searches a string for any of a set of bytes.
 *
 *
 * @s : point into the area where the string is
 * @accept : pointer to list of valid char
 *
 *
 * Return: pointer to c
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] == s[i + j])
		{
			j++;
			if (accept[j] == '\0')
				return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
