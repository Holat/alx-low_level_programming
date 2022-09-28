#include "main.h"

/**
 * _pow_recursion - power
 * @x: base
 * @y: power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);

	x += x;
	y--;
	_pow_recursion(x, y);
	return (x);
}
