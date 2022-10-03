#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: the value
 *
 * Return: a pointer
 */

char *create_array(unsigned int size, char c)
{
	char *s = malloc(sizeof(char *) * size);
	int i = 0;

	while (i < size)
	{
		*(s + i) = c;
		i++;
	}

	if (size == 0)
		return (NULL);
	else
		return (s);
	free(s);
}
