#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
/**
 * @n: stores the sign
 */
int print_sign(int n);

int main(void)
{
	int r;

	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
/**
 * print_sign - checks for signs
 *
 * @n: stores the sign
 *
 * Return: 1 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
		putchar(43);
	else if (n == 0)
		return (0);
		putchar(48);
	else
		return (-1);
		putchar(45);
}
