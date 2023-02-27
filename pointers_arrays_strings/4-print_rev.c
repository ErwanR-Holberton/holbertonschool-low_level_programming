#include "main.h"

/**
 * print_rev - Entry point
 *
 * @str : points to string start
 * print the string
 */
void print_rev(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{

	}
	for (; i >= 0; i--)
		_putchar(str[i]);
	_putchar('\n');
}
