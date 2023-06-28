#include "main.h"

/**
 * *rot13 - check the code
 * @str: start of string
 *
 * Return: start of string
 */
char *rot13(char *str)
{
	int i, j;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 2 * 26; j++)
		{
			if (letters[j] == str[i])
			{
				j = ((j - (26 * (j > 25)) +13) % 26 )+ (26 * (j > 25));
				str[i] = letters[j];
			}
		}
	}
	return (str);
}
/*
for (j = 0; str[i] != majs[j] && str[i] != mins[j]; )
	j++;

if (str[i] == majs[j])
	str[i] = (str[i] - 'A' + 13) % 26 + 'A';
else
	str[i] = (str[i] - 'a' + 13) % 26 + 'a';
*/
