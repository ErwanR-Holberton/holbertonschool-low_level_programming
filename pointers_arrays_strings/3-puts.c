#include "main.h"

/**
 * _puts - Entry point
 *
 * @str : points to string start
 * print the string
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
