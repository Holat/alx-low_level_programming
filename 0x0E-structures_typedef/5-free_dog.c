#include "dog.h"
#include <stdio.h>

/**
 * free_dog - frees the memory of dog
 * @d: ponter to the struct
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
