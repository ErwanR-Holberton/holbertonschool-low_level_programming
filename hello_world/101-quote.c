#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful", 31);
	write(STDOUT_FILENO, "\" - Dora Korpar, 2015-10-19\n", 28);
	return (1);
}
