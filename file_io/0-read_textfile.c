#include "main.h"
/**
 * read_textfile - read input file and print it in stdout
 * @filename: the name of the file to read
 * @letters: the amount of chars to print
 *
 * Description: read input file and print it in stdout
 * Return: the amount printed
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

	close(descriptor);

	return (count);
}
