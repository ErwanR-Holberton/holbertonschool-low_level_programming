#include "main.h"

/**
 * *cap_string - check the code
 * @str: start of string
 *
 * Return: start of string
 */
char *cap_string(char *str)
{
	int i, word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (word == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				word = 1;
			}
		}
		else if (str[i] < 'a' || str[i] > 'z')
			word = 0;
	}
	return (str);
}
