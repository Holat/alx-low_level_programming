#include <string.h>
#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: size of cpy from source
 *
 * Return: a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;


	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];

	for (; i < n; n++)
		dest[i] = '\0';

	return (dest);
}
