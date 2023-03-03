#include <stdio.h>
#include "main.h"

/**
 * _strstr - Entry point
 *
 * searches a string for any substring
 *
 *
 * @haystack : point into the area where the string is
 * @needle : pointer to substring
 *
 *
 * Return: pointer to c
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	if (*needle == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			j++;
			if (needle[j] == '\0')
				return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
