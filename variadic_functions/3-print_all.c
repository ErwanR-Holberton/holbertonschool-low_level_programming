#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print anything passed in arg after format
 * @format: list of the types of the arguments
 * ex : cicssi
 * char, int, char, string, string, int
 * Return: NOTHING
 */
void print_all(const char * const format, ...)
{
	unsigned long i = 0;
	char *s;
	va_list ArgsInfos;

	va_start(ArgsInfos, format);

	while (format == NULL)
	{
		return;
	}

	while (*(format + i) != '\0')
	{

		switch (*(format + i))
		{
		case 'c':
			printf("%c", va_arg(ArgsInfos, int));
			break;

		case 'i':
			printf("%d", va_arg(ArgsInfos, int));
			break;

		case 'f':
			printf("%f", va_arg(ArgsInfos, double));
			break;

		case 's':
			s = va_arg(ArgsInfos, char *);
			if (s == 0)
				printf("(nil)");
			printf("%s", s);
			break;
		}
		if (*(format + i + 1) != '\0' && (*(format + i) == 'c' ||
		*(format + i) == 'i' || *(format + i) == 's' || *(format + i) == 'f'))
			printf(", ");

		i++;
	}
	printf("\n");
	va_end(ArgsInfos);
}
