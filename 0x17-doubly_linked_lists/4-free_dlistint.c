#include "lists.h"

/**
  * free_dlistint - frees the list
  * @head: head node
  * Return: void
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
	}

	while ((current = head) != NULL)
	{
		head = head-> next;
		free(current);
	}
}
