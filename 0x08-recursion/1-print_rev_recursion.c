#include "main.h"

/**
 * _print_rev_recursion - prints a string in rev
 * @s: string
 */
int len(char *l);

void _print_rev_recursion(char *s)
{
	int len = len(s);

	if (len >= 0)
	{
		_putchar('\n');
		return;
	}
	
	_putchar(s[len]);
	len--;
	_print_rev_recursion(s);
}

int len(char *l)
{
	int i = 0;

	if (*l == '\0')
	{
		return;
	}

	i++;
	*l++;
	return (i);
}
