#include "main.h"
#include <stdlib.h>
/**
 * get_next_word_lenght - check the code.
 * @str: string to search
 * Return: lenght of next word
 */
int get_next_word_lenght(char *str)
{
	int i = 0;

	for (i = 0; str[i] != ' ' && str[i] != '\0';)
		i++;

	return (i);
}
/**
 * count_words - check the code.
 * @str: string to search
 * Return: number of words
 */
int count_words(char *str)
{
	int i = 0, word = 0, wordcount = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (word == 1)
			{
				wordcount++;
				word = 0;
			}
		}
		else if (word == 0)
			word = 1;
	}

	return (wordcount);
}
/**
 * **strtow - check the code.
 * cut string into words
 * @str: string to cut
 * Return: pointer to array of strings or NULL
 */
char **strtow(char *str)
{
	int i, j, lenght, wordcount = 0, word = 0;
	char **arrayofpointers;

	if (*str == '\0' || str == NULL)
		return (0);

	wordcount = count_words(str);

	arrayofpointers = malloc(sizeof(wordcount + 1));
	if (arrayofpointers == NULL)
		return (0);

	for (i = 0; i < wordcount; i++)
	{
		for (j = 0; *str == ' ' ;)
			str++;
		lenght = get_next_word_lenght(str);

		arrayofpointers[i] = malloc(sizeof(int) * (lenght + 1));
		if (arrayofpointers[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(arrayofpointers[i]);

			free(arrayofpointers);
			return (0);
		}
		for (j = 0; j < lenght; j++)
			*(arrayofpointers[i] + j) = str[j];

		str = str + j;
	}
	arrayofpointers[wordcount] = '\0';

	return (arrayofpointers);
}