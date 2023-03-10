#include <stdio.h>
#include "main.h"

/**
 * *_strncat - Entry point
 *
 * Concatenate
 *
 * @dest : pointer to destination (first) string
 * @src : pointer to second string
 * @n : n = max bytes
 * Return: pointer to string start
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, str1_lenght = 0;

	while (dest[i])
	{
		i++;
	}
	str1_lenght = i;
	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[str1_lenght + i] = src[i];
		i++;
	}
	return (dest);
}
