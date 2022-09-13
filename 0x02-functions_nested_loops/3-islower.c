#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 *
 * @c: stores the letter
 */
int _islower(int c);

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
 * _islower - checks for lowercase
 *
 * @c: stores the letter
 *
 * Return: 1 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
