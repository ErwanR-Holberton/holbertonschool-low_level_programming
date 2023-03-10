#include <stdio.h>
#include "main.h"

/**
 * _atoi - Entry point
 * @s : pointer to input string
 * convert string number to int
 * Return: string value
 */
int _atoi(char *s)
{
	unsigned int i = 0, str_value = 0, done = 0, sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = -sign;
		else if ((s[i] >= '0') && (s[i] <= '9'))
		{
			str_value = str_value * 10 + s[i] - '0';
			done = 1;
		}
		else if (done == 1)
			break;
	}
	return (str_value * sign);
}
