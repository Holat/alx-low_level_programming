#include <stdio.h>
/**
 * main - returns fibomacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 1024; i++)
	{

		if ((i % 3 == 0) || (i % 5 == 0))
		{
			i += i;
		}

	}

	printf("%d\n", i);
	return (0);
}
