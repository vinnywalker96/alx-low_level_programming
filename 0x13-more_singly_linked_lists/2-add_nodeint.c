#include "lists.h"

/**
 * add_nodeint - adds new node at the begining
 * @head: head node
 * @n: interger input
 * Return: all nodes added
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(*head));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;

	node->next = (*head);
	(*head) = node;

	return (node);
}
