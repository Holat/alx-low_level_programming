#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints info about the dog
 * @d: pointer to the dog struct
 *
 */

void print_dog(struct dog *d)
{
	if (*d == NULL)
		printf("nil\n");

	printf("Name: %s\n", d->name);
	printf("Age: %d\n", d->age);
	printf("Owner: %s\n", d->owner);
}
