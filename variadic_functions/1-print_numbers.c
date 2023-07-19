#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print all num separated by separator
 * @n: number of arguments
 * @separator: string to separate numbers
 * Return: NOTHING
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ArgsInfos;

	va_start(ArgsInfos, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ArgsInfos, int));
		if (*separator != 0 && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ArgsInfos);
}
