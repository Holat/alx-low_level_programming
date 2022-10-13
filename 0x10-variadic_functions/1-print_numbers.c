#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_numbers - returns sum of all its parameters
 * @n: number of parameters to be passed
 * @separator: the separator
 *
 * Return: the sum when n !=0 else return 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n == 0)
		return;

	va_start(ap, n);

	i = 0;
	for (i = 0; i < n; i++)
	{
		if (separator != NULL || n == 0)
		{
			printf("%d", va_arg(ap, int));

			if (i < (n - 1))
				printf("%s", separator);
		}
	}

	putchar('\n');
	va_end(ap);
}
