#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: string
 */

int _strlen_recursion(char *s)
{
	i = 0;

	if (*s == '\0')
		return (0);

	i++;
	return (i);
}
