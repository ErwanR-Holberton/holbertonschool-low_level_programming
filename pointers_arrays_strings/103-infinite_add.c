#include <stdio.h>
#include "main.h"

/**
 * *infinite_add - Entry point
 * add two numbers
 * @r : result
 * @n1 : number 1 to add
 * @n2 : number 2
 * @size_r : buffer r size
 * Return: 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j, ln1 = 0, ln2 = 0, Bigger = 0, Lower = 0, tempo = 0;
	char *p;

        for (i = 0; i < size_r; i++)
		r[i] = '0';
	for (i = 0; n1[i] != '\0'; i++)
		ln1++;
	for (i = 0; n2[i] != '\0'; i++)
		ln2++;
	if ((ln1 + 1 > size_r) || (ln2 + 1 > size_r))
		return (0);
	else
	{
		if (ln1 > ln2)
		{
			Bigger = ln1;
			Lower = ln2;
		}
		else
		{
			Bigger = ln2;
			Lower = ln1;
			p = n1;
			n1 = n2;
			n2 =p;
		}
		ln1=0;
		ln2=0;
		r[Bigger] = '\0';
		for (i = Bigger - 1; (i >= 0); i--)
		{
			if (Bigger - i  > Lower)
				ln2 = 0;
			else
				ln2 = n2[i - (Bigger - Lower)] - '0';
			ln1 = n1[i] - '0';
			r[i] = (ln1 + ln2 + tempo) % 10 + '0';
			if (ln1 + ln2 + tempo > 9)
				tempo = 1;
			else
				tempo = 0;
			if (i == 0)
				if(tempo == 1)
				{
					if (Bigger + 1 < size_r)
					{
						for (j = Bigger + 1; j > 0; j--)
							r[j] = r[j - 1];
						r[0] = tempo + '0';
					}
					else
						return (0);
				}
		}
		return (r);
        }
  }
