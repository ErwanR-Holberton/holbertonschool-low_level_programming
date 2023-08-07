#include "main.h"
/**
 * create_file - create file and write inside
 * @filename: the name of the file to read
 * @text_content: the text to print
 *
 * Description: create file and write inside
 * Return: 1 (succes) or -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, chars_printed;

	if (filename == NULL || text_content == NULL)
		return (-1);
	file_descriptor = open(filename, O_CREAT | O_RDWR, 0600);
	if (file_descriptor == -1)
		return (-1);
	chars_printed = write(file_descriptor, text_content, strlen(text_content));
	close(file_descriptor);
	return (chars_printed);
}
