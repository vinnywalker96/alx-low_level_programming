#include "lists.h"

/**
 * free_list - frees a list_t
 * @head: list struct
 */


void free_list(list_t *head)
{

	list_t *node;

	node = malloc(sizeof(list_t));

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}

