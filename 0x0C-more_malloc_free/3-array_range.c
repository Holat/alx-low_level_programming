#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: starting point
 * @max: maximum value
 *
 * Return: a pointer to the array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc((sizeof(*arr) * (max - min)) + 1);
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i <= (max - min))
	{
		arr[i] = min;
		i++, min++;
	}

	return (arr);
	free(arr);
}
