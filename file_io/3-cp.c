#include "main.h"
/**
 * main - copies a file like the shell command cp
 * @ac: number of command arguments
 * @av: array of arguments
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int filedes_from, filedes_to, nb_read = 1024, nb_written, close_file;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	filedes_from = open(av[1], O_RDONLY);
	check_errors(98, filedes_from, 0, av[1]);

	filedes_to = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	check_errors(99, filedes_to, 0, av[2]);

	while (nb_read == 1024)
	{
		nb_read = read(filedes_from, buff, 1024);
		check_errors(98, nb_read, 0, av[1]);
		nb_written = write(filedes_to, buff, nb_read);
		check_errors(99, nb_written, 0, av[2]);
	}
	close_file = close(filedes_from);
	check_errors(100, close_file, filedes_from, NULL);
	close_file = close(filedes_to);
	check_errors(100, close_file, filedes_to, NULL);

	return (0);
}
/**
 * check_errors - check for error
 * @error: error code
 * @to_check: result to check if -1 (result of close or number or filedes)
 * @filedescriptor: copy of the file descriptor
 * @file_name: name of the file
 *
 * Return: Nothing
 */
void check_errors(int error, int to_check, int filedescriptor, char *file_name)
{
	if (error == 100)
	{
		if (to_check == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filedescriptor);
			exit(100);
		}
	}
	else if (error == 99)
	{
		if (to_check == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
			exit(99);
		}
	}
	else if (error == 98)
	{
		if (to_check == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
			exit(98);
		}
	}
}
