#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: accepts string param
 */

void print_rev(char *s)
{
	int length = strlen(s);

	for (i = length; i >= 0; i--)
		_putchar(*(s + i));

	_putchar('\n');
}
