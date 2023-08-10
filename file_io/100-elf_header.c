#include "main.h"
/**
 * main - print the elf hearder
 * @ac: number of command arguments
 * @av: array of arguments
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int filedes, nb_read = 1024, i, count = 0;
	char buff[1024];

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(97);
	}
	filedes = open(av[1], O_RDONLY);

	nb_read = read(filedes, buff, 1024);
	for (i = 0; i < nb_read && count < 11; i++)
	{
		if (buff[i] == '\n')
			count++;
	}
	write(STDOUT_FILENO, buff, i);
	close(filedes);

	return (0);
}
