#include <stdio.h>
#include "dog.h"

/**
 * init_dog - dog info
 * @d: the struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name == NULL || age == NULL || owner == NULL)
		return NULL;

	d->name = name;
	d->age = age;
	d->owner = owner;
}