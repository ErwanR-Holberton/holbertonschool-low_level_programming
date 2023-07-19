#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print all qtrings separated by separator
 * @n: number of arguments
 * @separator: string to separate strings
 * Return: NOTHING
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ArgToPrint;
	va_list ArgsInfos;

	va_start(ArgsInfos, n);
	for (i = 0; i < n; i++)
	{
		ArgToPrint = va_arg(ArgsInfos, char *);
		if (ArgToPrint == 0)
			printf("(nil)");
		else
			printf("%s", ArgToPrint);

		if (separator != 0 && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ArgsInfos);
}
