#include "main.h"

/**
 * _strpbrk - searches a string for any a set of bytes
 * @s: string to check
 * @accept: string to be compared
 *
 * Return: pointer to byte
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accepts[j])
				break;
		}
		if (accepts[j])
			return (s + j);
	}
	return (0);
}
