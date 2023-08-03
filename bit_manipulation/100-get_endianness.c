#include "main.h"
/**
 * get_endianness - find if endianess is littel or big
 *
 * Description: find if endianess is littel or big
 * Return: 1 big 0 little
 */
int get_endianness(void)
{
	unsigned int test = 514;
	char *p = (char *)&test;

	if (*p == 2)
		return (1);
	else if (*p == 1)
		return (0);

	return (555);
}
