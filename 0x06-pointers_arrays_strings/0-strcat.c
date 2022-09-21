#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 *
 *Returns: a string
 */

char *_strcat(char *dest, char *src)
{
	int src_len = strlen(src);
	int dest_len = strlen(dest);
	int len = src_len + dest_len + 1; /* 1 is for the null character*/
	char *s = calloc(size, sizeof(char));
	int i;

	for (i = 0; i < dest_len; i++)
		s[i] = dest[i];
	for (i = 0; i < src_len; i++)
		s[dest_len + i] = src[i];

	s[size - 1] = '\0';

	return (s);
}
