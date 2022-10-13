#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - gets the function operation
 * @s: the operator
 *
 * Return: the function
 */
void *get_op_func(char *s)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 6)
	{
		if (*s == ops[i][0])
			return (ops[i][1]);
		else
			return (NULL);
		i++;
	}
}
