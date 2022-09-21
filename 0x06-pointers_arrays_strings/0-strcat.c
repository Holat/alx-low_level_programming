#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: a string
 */

char *_strcat(char *dest, char *src)
{
	int src_len = strlen(src);
	int dest_len = strlen(dest);
	int len = src_len + dest_len + 1; /* 1 is for the null character*/
	char *s = (char *)malloc(len * sizeof(char));
	int i = 0;

	for (i = 0; i < dest_len; i++)
		*(s + i) = *(dest + i);
	for (i = 0; i < src_len; i++)
		*(s + dest_len + i) = *(src + i);

	*(s + (len - 1)) = '\0';

	return (s);
}
