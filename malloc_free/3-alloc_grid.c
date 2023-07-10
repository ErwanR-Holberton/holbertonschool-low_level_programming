#include "main.h"
#include <stdlib.h>
/**
 * *new_array_line - check the code.
 * Create new Array
 * @w: width of the array
 * Return: Pointer to start of array or null if faillure
 */
int *new_array_line(int w)
{
	int *line;
	int i = 0;

	line = malloc(sizeof(int) * (w + 1));
	if (line == NULL)
		return (0);

	for (i = 0; i < w; i++)
		line[i] = 0;
	line[w] = '\0';
	return (line);
}
/**
 * **alloc_grid - check the code.
 *
 * Create Array of pointers to arrays
 *
 * @width: width of the 2d array
 * @height: height
 * Return: Pointer to start  of 2d array or null if faillure
 */
int **alloc_grid(int width, int height)
{
	int **arrayOfarrays;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	arrayOfarrays = malloc(sizeof(int *) * height);
	if (arrayOfarrays == NULL)
		return (0);

	for (i = 0; i < height; i++)
		arrayOfarrays[i] = new_array_line(width);

	return (arrayOfarrays);
}
