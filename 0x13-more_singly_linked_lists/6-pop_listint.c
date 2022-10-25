#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: a pointer to the head node
 *
 * Return: the head node data
 */

int pop_listint(listint_t **head)
{
	return (*head->n);
}
