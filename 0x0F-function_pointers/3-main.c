#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: the number of argurment passed
 * @argv: array of arguments passed
 * Return: Always (0) success
 */

int main(int argc, char **argv)
{
	int num1, num2, result;
	char *op = argv[2];

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argv[4])
	{
		printf("Error\n");
		exit(98);
	}

	if (*op != "+" || *op != "-" || *op != "*" || *op != "/" || *op != "%")
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == "/" || *op == "%") && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(op)(num1, num2);
	printf("%d\n", result);

	return (0);
}
