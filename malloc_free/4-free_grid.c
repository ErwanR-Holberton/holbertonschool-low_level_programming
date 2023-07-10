#include "main.h"
#include <stdlib.h>


/**
 * free_grid - check the code.
 *
 * free 2d Array
 *
 * @height: height of the array
 * Return: NOTHING
 */
void free_grid(int **grid, int height)
{
	for (height--; height >= 0; height--)
		free(grid[height]);

	free(grid);
}
