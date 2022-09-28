#include "main.h"

/**
 * is_prime_number - checks for prime numbers
 * @n: integer
 *
 * Return: 1 if prime else 0
 */

int is_prime_number(int n)
{
	if (n / 1 == n && n / n == 1)
	{
		if (n != 1)
			return (1);
	}
	else
		return (0);
}
