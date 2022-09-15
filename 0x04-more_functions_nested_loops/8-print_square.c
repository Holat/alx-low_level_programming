#include "main.h"

/**
 * print_square - prints square
 * @size: size of square
 */

void print_square(int size)
{
	int i, j;
	int c = 35;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
