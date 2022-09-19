#include <string.h>
#include "main.h"

/**
 * puts_half - prints half a string
 * @str: param
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int n = (len) / 2;
	int i = 0;

	for (i = 0; i <= len ; i++)
	{
		if (i > n)
			_putchar(*(str + i));
	}

	_putchar('\n');
}
