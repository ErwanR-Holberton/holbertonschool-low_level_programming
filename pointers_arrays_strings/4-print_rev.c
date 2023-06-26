#include "main.h"

/**
 * print_rev - check the code
 * @s: start of string
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;

	while (count >= 0)
	{
		 count--;
		_putchar(s[count]);
	}
	_putchar('\n');
}
