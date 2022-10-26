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
	list_t *new_node;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		return (NULL);
	}

	if (new_node == NULL && new_node->str == NULL)
	{
		free(new_node);
	}
	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (*head);
	free(*head);


}
