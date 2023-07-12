#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code.
 *
 * mutiply the twn next argument in command line
 *
 * @argc: arguments count
 * @argv: arrays of adresses of the arguments strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, j, k, len1 = 0, len2 = 0, mul = 0;
	char *result;
	int count;

	if (argc != 3)
		exit(98);

	for (; *(argv[1] + len1) != '\0';)
		len1++;
	for (; *(argv[2] + len2) != '\0';)
		len2++;
printf("%d %d\n", len1, len2);
printf("%s %s\n", argv[1], argv[2]);
	result = malloc(len1 + len2);

	for (i = 0; i < len1 + len2; i++)
		result[i] = '0';

	for (i = len2 + len1 - 1; i >= 0; i--)
		for (j = len2 - 1; j >= 0; j--)
		{
			for (k = len1 - 1; k >= j; k--)
			{
				mul = (argv[1][k] - '0') * (argv[2][j] - '0');
				result[i] = result[i] + (mul % 10);
				result[i - 1] = result[i - 1] + (mul / 10);

			for (count = 0; result[count] != '\0'; count++)
				printf("%c", result[i] + '0');
			printf("\n");
			}
		}

	for (i = len2 + len1 - 1; i >= 0; i--)
	{
		if (result[i] >= 10)
		{
			result[i - 1] = result[i - 1] + (result[i] / 10);
			result[i] = result[i] - (result[i] / 10);
		}
		result[i] = result[i] + '0';
	}

	/*for (i = 0; i < len1 + len2; i++)
		_putchar(result[i]);
	_putchar('\n');*/
	/*free(result);*/
	return (0);
}
