#include "lists.h"

/**
 * list_len  - prints the data of linked list
 * @h: pointer to the first element
 *
 * Return: the amount of element in the list
 */

size_t list_len(const list_t *h)
{
	unsigned long i = 0;


	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
