#include "main.h"

/**
 * *cap_string - check the code
 * @str: start of string
 *
 * Return: start of string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
	}
	return (str);
}
