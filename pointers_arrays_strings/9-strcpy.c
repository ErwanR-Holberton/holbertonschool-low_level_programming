#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - Entry point
 * @dest : pointer to input string
 * @src : pointer to future copied string
 * Return: pointer to string start
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (dest[i])
	{
/*		printf("%c", dest[i]);*/
		src[i] = dest[i];
		i++;
	}
/*	dest[i] = '\0';*/
	return (src);
}
