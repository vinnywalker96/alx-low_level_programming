#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning
 * @head: head node
 * @str: str arg
 *
 * Return: new list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		return (NULL);
	}

	if (new_node == NULL || new_node->str == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->len = strlen(str);
	new_node->next = (*head);

	(*head) = new_node;

	return (new_node);
	free(new_node);

}
