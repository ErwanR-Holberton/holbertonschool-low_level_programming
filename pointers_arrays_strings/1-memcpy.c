#include <stdio.h>
#include "main.h"

/**
 * *_memcpy - Entry point
 *
 * copy the first
 * @n : bytes of the memory area pointed to by
 * @src : into the area pointed by
 * @dest : dest
 *
 *
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
