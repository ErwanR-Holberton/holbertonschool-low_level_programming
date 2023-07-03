#include "main.h"
/**
 * _puts_recursion - check the code
 * @s: start of string to puts
 *
 * Return: NOTHING
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}

