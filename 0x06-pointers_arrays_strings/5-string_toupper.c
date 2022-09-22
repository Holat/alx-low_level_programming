#include "main.h"

/**
 * string_toupper - converts strings to uppercase
 * @s: the string to be converted
 *
 * Return: an uppercase string
 */

char *string_toupper(char *s)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
