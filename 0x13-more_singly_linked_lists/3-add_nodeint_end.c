#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: head node
 * @n: int input
 * Return: all new nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *new_node;

	new_node = malloc(sizeof(*head));
	if (new_node == NULL)
	{
		return (NULL);
	}
	last = (*head);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		(*head) = new_node;
		return (*head);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new_node;

	return (new_node);
}
