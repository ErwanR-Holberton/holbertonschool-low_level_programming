/**
 * int_index - search for an integer
 * @array: address of the array
 * @size: size of the array
 * @cmp: function to use
 *
 * Return: the firt element for wich cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for(i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);

	return (-1);
}
