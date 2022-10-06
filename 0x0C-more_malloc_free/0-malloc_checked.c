#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer value
 */

void *malloc_checked(unsigned int b)
{
	int *s = malloc(b);
	free(s);
}
