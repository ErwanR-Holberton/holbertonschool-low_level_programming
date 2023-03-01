#include <stdio.h>
#include "main.h"

/**
 * *rot13 - Entry point
 *
 * a - z = n - z, a - m
 *
 * @s : point to string to rotate
 *
 * Return: pointer to rotated string
 */
char *rot13(char *s)
{
	unsigned int i = 0, j = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = alpha[13 + j + ((j / 13) % 2) * -26];
				j = 52;
			}
		}
	}
	return (s);
}
