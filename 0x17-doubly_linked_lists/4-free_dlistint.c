#include "lists.h"

/**
  * free_dlistint - frees the list
  * @head: head node
  * Return: void
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *new_node;

	while (head != NULL)
	{
		new_node = head;
		head = head->next;
		head = head->prev;
		free(new_node);
	}
}
