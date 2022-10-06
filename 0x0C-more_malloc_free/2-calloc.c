#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - it allocates memory to an array
 * @nmemb: the values of the array
 * @size: size of the data type
 *
 * Return: pointer to the memory address of the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = (nmemb * size);

	if (p == NULL)
		return (NULL);

	i = 0;
	while (i < nmemb)
	{
		*(p + i) = 0;
		i++;
	}

	return (p);
	free(p);
}
