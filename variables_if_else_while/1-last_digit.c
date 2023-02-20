#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int Last_Digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	Last_Digit = n % 10;
	printf("Last digit of %d ", n);
	if (Last_Digit > 5)
	{
		printf("is %d and is greater than 5\n", Last_Digit);
	}
	else
	{
		if (Last_Digit == 0)
		{
			printf("is 0 and is 0\n");
		}
		else
		{
			printf("is %d and is less than 6 and not 0\n", Last_Digit);
		}
	}

	return (0);
}
