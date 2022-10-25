#include "lists.h"

/**
 * listint_len - returns the length of a list
 * @h: pointer to the first node on the list
 *
 * Return: the length of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t i;
	const listint_t *tmp;

	tmp = h;
	for (i = 0; tmp != NULL; i++)
		;
	return (i);
}
