#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Entry point
 *
 * searches a string for any substring
 *
 * @a : point to 2d array 8lin 8col
 *
 *
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i = 0, j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
