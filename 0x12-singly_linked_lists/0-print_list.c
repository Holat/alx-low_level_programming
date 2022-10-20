#include "lists.h"

/**
 * print_list - prints the data of linked list
 * @h: pointer to the first element
 *
 * Return: the amount of element in the list
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return;

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
