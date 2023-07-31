#include <stdio.h>

void turtle(void) __attribute__((constructor));

/**
 * turtle - win the race against the hare
 * Description: faster than main()
 * Return: NOTHING
 */
void turtle(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
