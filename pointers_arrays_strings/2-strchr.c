#include <stdio.h>
#include "main.h"

/**
 * *_strchr - Entry point
 *
 * Returns a pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 *
 * @s : point into the area where the string is
 * @c : character to find
 *
 *
 * Return: pointer to c
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	do
	{
		if (s[i] == c)
			return (&s[i]);
		if (s[i] != '\0')
			i++;
	}
	while (s[i] != '\0');
	return (NULL);
}
