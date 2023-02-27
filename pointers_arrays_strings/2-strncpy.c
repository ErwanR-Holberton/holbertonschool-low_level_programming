#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - Entry point
 *
 * Concatenate
 *
 * @dest : pointer to destination (first) string
 * @src : pointer to second string
 * @n : n = max bytes
 * Return: pointer to string start
 */
char *_strncpy(char *dest, char *src, int n)
{
        int i = 0;

	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
