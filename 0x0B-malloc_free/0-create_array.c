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
	char *s;
	unsigned int i = 0;

	s = malloc(sizeof(char) * size);
	while (i < size)
	{
		*(s + i) = c;
		i++;
	}

	if (*s == NULL)
		return (1);

	return (s);
	free(s);
}
