#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: byte of s2 to be concatenated
 *
 * Return: a pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	int s1_len;
	char *s;

	if (s1 == NULL)
		*s1 = "";
	if (s2 == NULL)
		*s2 = "";

	s1_len = strlen(s1);
	s = malloc((sizeof(*s) * (s1_len)) + (n + 1));

	if (s == NULL)
		return (NULL):

	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	while (j < n)
	{
		s[i] = s2[j];
		j++, i++;
	}

	return (s);
	free(s);
}
