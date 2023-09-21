#include "search_algos.h"
#include <unistd.h>
/**
 * binary_search - search in an array using binary algorithm
 * @array: array to search
 * @size: size of the array
 * @value: value to find
 * Return: index found or -1 (fail)
 */
int binary_search(int *array, size_t size, int value)
{
	int i, left = 0, right = size - 1;

	if (array == NULL || size < 1)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array:");
		for (i = left; i < right; i++)
			printf(" %d,", i);
		printf(" %d\n", right);
		i = (left + right) / 2;
		if (array[i] == value)
			return (i);
		else if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
