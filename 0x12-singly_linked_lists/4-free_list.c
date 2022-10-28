#include "lists.h"

/**
 * free_list - frees a list_t
 * @head: list struct
 */


void free_list(list_t *head)
{

	list_t *node;

	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}

