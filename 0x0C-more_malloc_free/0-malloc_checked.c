#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer value
 *
 * Return: pointer to memory address
 */

void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
		exit(98);

	return (malloc(b));
	free(s);
}
