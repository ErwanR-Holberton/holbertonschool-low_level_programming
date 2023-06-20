#include "main.h"

/**
 * _islower - check the code
 *
 * Return: 1 if c is lower.
 */
int _islower(int c)
{
	if((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}
