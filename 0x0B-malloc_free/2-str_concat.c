#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a new string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *s;
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);
	int len = s1_len + s2_len;

	s = malloc((sizeof(char) * (len)) + 1);

	if (s == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	while (i < len)
	{
		s[i] = s2[j];
		i++, j++;
	}
	return (s);
	free(s);
}
