#include "lists.h"

/**
 * print_list - prints the data of linked list
 * @h: pointer to the first element
 *
 * Return: the amount of element in the list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;


	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] ", h->len);
		else
			printf("[0] (nil)");

		printf("%s\n", h->str);
		h = h->next;
		i++;
	}

	return (i);
}
