#include "lists.h"

/**
 * free_listint - free memory of all list.
 * @head: pointer to head in fucntion
 * Return: Always success.
 */
void free_listint(listint_t *head)
{
	list_t *current_node, *next_node;

	current_node = head;
	while (current_node != NULL)
	{
		next_node = current_node;
		free(current_node->n);
		free(current_node);
		current_node = next_node->next;
	}
}
