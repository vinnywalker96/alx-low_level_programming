#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds new node at the end
 * @head: head node
 * @str: str input
 * Return: head
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	last = (*head);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		return (NULL);
	}

	if (new_node == NULL ||  new_node->str == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
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
