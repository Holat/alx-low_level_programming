#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of the triange
 *
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for ((j = size - i); j < 0; j--)
			{
				_putchar(' ');
			}
			for (j = 0; j < i; j++)
			{

				_putchar('0');
			}
			if (i == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
}
