#include "main.h"

/**
 * binary_to_uint - converts binary to an unsigned int
 * @b: pointer to the binary string
 *
 * Return: the coverted number or null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, one, i;
	int l = 0;

	if (b == 0)
		return (0);


	while (b[l] != 0)
	{
		if (b[l] != '0' && b[l] != '1')
		return (0);
		l++;
	}

	l = l - 1;

	for (i = 0; l >= 0; i++, l--)
	{
		if (b[l] == '0')
			one = 0;
		else if (b[l] == '1')
			one = 1;
		one = one << i;
		res = res | one;
	}
	return (res);
}
