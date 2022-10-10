#ifndef 3_FUNCTIONS_LIKE_MACRO_H
#define 3_FUNCTIONS_LIKE_MACRO_H

#include <stdio.h>

/**
 * ABS - computes absolute value
 * @x: the value
 *
 * Return: absolute value
 */

int ABS(int x)
{
	if (x < 0)
		x *= -1;
	else
		x = x;

	return (x);
}

#endif
