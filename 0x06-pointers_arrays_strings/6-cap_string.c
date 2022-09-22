#include "main.h"

/**
 * cap_sing - capitalizes sings
 * @s: the sing to be converted
 *
 * Return: capitalized sing
 */

char *cap_sing(char *s)
{
	int i, c;
	int j;
	char sym[] = ",;.!?(){}\n\t\" ";

	for (i = 0, j = 0; s[i] != '\0'; i++)
	{
		if (s[0] > 96 && s[0] < 123)
			j = 1;
		for (c = 0; sym[c] != '\0'; c++)
		{
			if (sym[c] == s[i])
				j = 1;
		}

		if (j)
		{
			if (s[i] > 96 && s[i] < 123)
			{
				s[i] -= 32;
				j = 0;
			}
			else if (s[i] > 64 && s[i] < 91)
				j = 0;
			else if (s[i] > 47 && s[i] < 58)
				j = 0;
		}
	}
	return (s);
}
