#include "main.h"

/**
 * *_strcpy - check the code
 * @dest: array destination
 * @src: array source
 * Return: adress of destination
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	do {
		dest[count] = src[count];
		count++;
	} while (src[count] != '\0');
	return (&dest[0]);
}
