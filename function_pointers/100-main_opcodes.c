#include <stdio.h>
#include<stdlib.h>
/**
 * main - print own code
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: NOTHING
 */
int main(int argc, char **argv)
{
	int i, arg = atoi(argv[1]);
	int (*p)() = main;
	unsigned char *p2 = (unsigned char *)p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (arg < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < arg; i++)
		printf("%02x ", p2[i]);
	printf("\n");
	return (0);
}
