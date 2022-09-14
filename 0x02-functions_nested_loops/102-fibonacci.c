#include <stdio.h>
/**
 * main - returns fibomacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int n1 = 1;
	long int n2 = 2;
	long int n3, i;

	printf("%ld, %ld", n1, n2);

	for (i = 1; i <= 50; ++i)
	{

		printf("%ld", n1);
		printf(", ");

		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;

	}

	printf("\n");
	return (0);
}
