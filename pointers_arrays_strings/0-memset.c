#include <stdio.h>
#include "main.h"

/**
 * *_memset - Entry point
 *
 * fills the first
 * @n : bytes of the memory area pointed to by
 * @s : with the constant byte
 * @b : b
 *
 *
 * Return: pointer a
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
