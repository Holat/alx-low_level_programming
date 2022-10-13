#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns sum of all its parameters
 * @n: number of parameters to be passed
 *
 * Return: the sum when n !=0 else return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum;

	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);


	return (sum);
}
