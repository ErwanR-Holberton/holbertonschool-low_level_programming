#include <stdio.h>
#include "main.h"

/**
 * *_strcmp - Entry point
 *
 * Concatenate
 *
 * @s1 : pointer to first string
 * @s2 : pointer to second string
 *
 * Return: pointer to string start
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if ((s1[i] == '\0') || (s1[i] == '\0'))
			return (0);
	}
	return (s1[i] - s2[i]);
}
