#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to a newly allocated space
 * @str: string pointer
 *
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *s;
	int len = strlen(str);
	int i = 0;

	s = malloc((sizeof(char) * len) + 1);

	if (s == NULL)
		return (NULL);

	while (i < len)
	{
		s[i] = str[i];
		i++;
	}

	return (s)
	free (s);
}
