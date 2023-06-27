#include "main.h"

/**
 * _strcmp - check the code
 * @s1: first string
 * @s2: second string
 *
 * Return: difference between strings
 */
int _strcmp(char *s1, char *s2)
{
	int count;

	for (count = 0; s1[count] == s2[count] && s1[count] != '\0' && s2[count] != '\0'; )
		count++;


	return (s1[count] - s2[count]);
}
