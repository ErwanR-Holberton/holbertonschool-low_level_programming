#include <stdio.h>
#include "main.h"

/**
 * *cap_string - Entry point
 *
 * capitalize
 *
 * @a : pointer to first string
 *
 *
 * Return: pointer a
 */
char *cap_string(char *a)
{
	int i = 0, separator = 0;

	while (a[i] != '\0')
	{
		if ((a[i] == ',') || (a[i] == ';') || (a[i] == '.'))
			separator = 1;
		if ((a[i] == '!') || (a[i] == '?') || (a[i] == '\"'))
			separator = 1;
		if ((a[i] == '(') || (a[i] == ')') || (a[i] == '{') || (a[i] == '}'))
			separator = 1;
		if ((a[i] >= 'A') && (a[i] <= 'Z') && separator)
			separator = 0;
		if ((a[i] == ' ') || (a[i] == '\t') || (a[i] == '\n'))
			separator = 1;
		if ((a[i] >= 'a') && (a[i] <= 'z') && separator)
		{
			a[i] = a[i] - 'a' + 'A';
			separator = 0;
		}
		i++;
	}
	return (a);
}
