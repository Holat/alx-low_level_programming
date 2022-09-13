#include "main.h"
/**
 * print_last_digit - prints last digit
 *
 * @num: parameter
 *
 * Return: last digit
 */

int print_last_digit(int num)
{

	int n;

	if (num < 0)
		num = -num;

	n = num % 10;
	_putchar(n + '0');

	return (n);
}
