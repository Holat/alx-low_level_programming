#include "main.h"

/**
 * _strchr - locates a  character in a string
 * @s: string
 * @c: the character
 *
 * Return: a string
 */

char *_strchr(char *s, char c)
{
	int i = 0, j = 0;

	while (s != '\0')
	{
		if (s[i] == c)
		{
			break;
		}
		i++
	}

	while (s != '\0')
	{
		s[i] = s[j];
		j++;
	}

	return (s);
}
