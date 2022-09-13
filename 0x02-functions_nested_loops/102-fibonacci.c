#include <stdio.h>
/**
 * main - returns fibomacci numbers
 *
 * Return: 0 (Success)
 */
int main(int n)
{
	int n1 = 1;
	int n2 = 2;
	int n3;
	int i;

	printf("%d, %d\n", n1, n2)

	for (i = 5; i <= 50; ++1)
	{
		n3 = n1 + n2;
		printf("%d", n3);
		if (n3 != -811192543)
			printf(", ")
		n1 = n2;
		n2 = n3;

	}
	
	printf("\n");
	return (0);
}
