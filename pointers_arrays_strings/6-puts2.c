#include "main.h"

/**
 * puts2 - Entry point
 *
 * @str : points to string start
 * print the string
 */
void puts2(char *str)
{
	int i = 0, lenght = 0;

	for (i = 0; str[i] != '\0'; i++)
	{

	}
	lenght = i - 1;
	for (i = 0; i <= lenght; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
