#include "main.h"
/**
 * binary_to_uint - convert from binary to unsigned int
 * @b: points to the start of a string containing the binary input
 *
 * Description: convert from binary to unsigned int
 * Return: the input converted into unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (b == NULL)
		return (0);
	for (; *b != '\0'; b++)
	{
		value = value * 2 + (*b - '0');
		if (*b != '0' && *b != '1')
			return (0);

	}
	return (value);

}
