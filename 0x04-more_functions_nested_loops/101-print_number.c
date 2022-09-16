#include <stdio.h>
#include "main.h"

/**
 * print_number - Entry point
 * @n: the number to print
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num > 9)
	{
		_putchar((num / 10) + '0');
	}
	putchar(num % 10 + '0');
}
