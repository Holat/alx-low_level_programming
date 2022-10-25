#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: a pointer to the head node
 *
 * Return: the head node data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;

	data = tmp->n;

	*head = tmp->next;
	free(tmp);

	return (data);
}
