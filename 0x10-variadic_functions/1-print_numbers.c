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

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(ap, int));
		else if (separator && i == 0)
			printf("%d", va_arg(ap, int));
		else
			printf("%s%d", separator, va_arg(ap, int));
	}


	va_end(ap);
	printf("\n");
}
