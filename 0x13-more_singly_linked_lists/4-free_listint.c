#include "lists.h"

/**
 * free_listint - free memory of all list.
 * @head: pointer to head in fucntion
 * Return: Always success.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
