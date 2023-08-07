#include "main.h"
/**
 * print_binary - print the binary representation of n
 * @n: the value to print in binary
 *
 * Description: print the binary representation of n
 * Return: NOTHING
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int is_opened, descriptor, nb_read, n = 10;
	size_t count = 0;
	char buffer[10];

	is_opened = open(filename, O_RDONLY);
	descriptor = is_opened;

	if (!is_opened)
		return (0);

	while (count < letters)
	{
		if (count + 10 > letters)
			n = letters - count;
		nb_read = read(descriptor, buffer, n);
		write(1, buffer, nb_read);
		count += nb_read;
		if (nb_read != 10)
			break;
	}

	close(*filename);

	return(count);
}
