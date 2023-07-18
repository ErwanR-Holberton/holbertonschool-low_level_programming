#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - calculator
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: NOTHING
 */
int main(int argc, char **argv)
{
	int arg1, arg2;
	int (*f)(int, int) = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (*argv[2] != '+' && *argv[2] != '-' &&
	*argv[2] != '*' && *argv[2] != '/' && *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	if (arg2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n",f(arg1, arg2));
	return (0);
}
