#include "main.h"
/**
 * _strspn - check the code
 * @s: start of string
 * @accept: string to find
 *
 * Return: number of chars copied
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	for ( ; accept[i] != '\0'; i++)
		s[i] = accept[i];


	return (i);
}
