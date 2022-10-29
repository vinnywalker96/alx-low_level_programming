#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: linkedlist
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	while (*head)
	{
		node = (*head)->next;
		free((*head));
		(*head)->next = NULL;
		(*head) = node;
	}
}
