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
	int descriptor, nb_read, n = 10;
	size_t count = 0;
	char buffer[10];

	if (filename == NULL)
		return (0);
	descriptor = open(filename, O_RDONLY);

	if (descriptor == -1)
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
