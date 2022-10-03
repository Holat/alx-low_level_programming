#include "main.h"
#include <stdlib.h>
#include <string.h>

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

	if (str == NULL)
		return (NULL);

	s = malloc((sizeof(char) * len) + 1);
	if (s == NULL)
		return (NULL);

	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[len] = '\0';
	return (s);
}
