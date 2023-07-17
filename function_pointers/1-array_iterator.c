#include <stddef.h>
/**
 * array_iterator - execute fuction with each element of the array as parameter
 * @array: address of the array
 * @size: size of the array
 *
 * Return: NOTHING
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array != 0)
		for (i = 0; i < size; i++)
			if (action != 0)
				action(array[i]);
}
