#include "main.h"

/**
 * rev_string - Entry point
 *
 * @s : points to string start
 * print the string
 */
void rev_string(char *s)
{
	int i = 0, lenght = 0;
	char tempo;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	lenght = i - 1;
	for (i = 0; i <= lenght / 2; i++)
	{
		tempo = s[i];
		s[i] = s[lenght - i];
		s[lenght - i] = tempo;
	}
}
