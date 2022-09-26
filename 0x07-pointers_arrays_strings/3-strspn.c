#include "main.h"

/**
 * _strspn - gets length of prefix string
 * @s: string
 * @accept: second string
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[i])
		{
			if (s[i] == accepts[j])
				break;
		}
	}
	return (i);
}
