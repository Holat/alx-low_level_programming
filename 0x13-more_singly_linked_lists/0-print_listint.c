#include "lists.h"

/**
 * print_listint - prints elements of the nodes in a list
 * @h: pointer to the first node on the list
 *
 * Return: number of elements in the list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	unsigned long int i = 0;

	tmp = h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}

	return (i);
}
