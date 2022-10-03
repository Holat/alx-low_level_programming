#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a pointer to a two dimensional array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to thr array
 */

int **alloc_grid(int width, int height)
{
	int *arr;

	arr = malloc(sizeof(int) * (width * height));

	if (arr == NULL)
		return (NULL);

	if (width <= 0 || height <= 0)
		return (NULL);

	return (**arr);
	free(arr);
}
