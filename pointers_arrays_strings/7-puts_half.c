#include "main.h"

/**
 * puts_half - Entry point
 *
 * @str : points to string start
 * print half the string
 */
void puts_half(char *str)
{
	int i = 0, lenght = 0;

	for (i = 0; str[i] != '\0'; i++)
	{

	}
	lenght = i - 1;
	for (i = lenght / 2 + 1; i <= lenght; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
