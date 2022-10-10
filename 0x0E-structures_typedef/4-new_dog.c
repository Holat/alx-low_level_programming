#include "dog.h"
#include <stdio.h>

/**
 * new_dog - another dog :)
 * @name: of the dog
 * @age: of the dog
 * @owner: of thr dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new
	
	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
	free(new);
}
