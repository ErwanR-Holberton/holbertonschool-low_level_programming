#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog - create a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: pointer to new structure dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *my_dog2 = malloc(sizeof(struct dog));
	if (my_dog2 == 0)
		return (NULL);
	(*my_dog2).name = name;
	(*my_dog2).age = age;
	(*my_dog2).owner = owner;
	return(my_dog2);
}
