#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes rot13
 * @s: string
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i, j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == data1[j])
		{
			s[i] = datarot[j];
			break;
		}
	}
	return (s);
}
