#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog - create a new dog
 * @d: address of the structure dog
 *
 * Return: NOTHING
 */
void free_dog(dog_t *d)
{
	free((*d).owner);
	free((*d).name);
	free(d);
}
