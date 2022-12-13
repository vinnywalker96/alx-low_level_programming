#include "lists.h"

/**
  * add_dnodeint_end - function that adds a new node at the end
  * @head: head node
  * @n: input
  * Return: All node added
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	last = (*head);
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if ((*head) == NULL)
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
	free(new_node);
}
