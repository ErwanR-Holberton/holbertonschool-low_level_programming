#include <stdio.h>
#include "main.h"

/**
 * *_strcat - Entry point
 *
 * Concatenate
 *
 * @dest : pointer to destination (first) string
 * @src : pointer to second string
 *
 * Return: pointer to string start
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, str1_lenght = 0;

	while (dest[i])
	{
		i++;
	}
	str1_lenght = i;
	i = 0;
	while (src[i] != '\0')
	{
		dest[str1_lenght + i] = src[i];
		i++;
	}
	return (dest);
}
