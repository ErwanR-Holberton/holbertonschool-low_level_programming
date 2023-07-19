#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sum all the args using the first to know how many there are
 * @n: number of arguments
 * Return: sum of all args or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list ArgsInfos;

	if (n == 0)
		return (0);


	va_start(ArgsInfos, n);
	for (i = 0; i < n; i++)
		result = result + va_arg(ArgsInfos, int);

	va_end(ArgsInfos);

	return (result);
}
