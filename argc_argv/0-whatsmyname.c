#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	if (argc == '\0')
		printf("argc is used ?");
	return (0);
}
