#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: head node
 * @str: str arg
 *
 * Return: new list
 */

list_t *add_node(list_t **head, char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = _strdup(str);

	if (new->str == NULL)
		return (NULL);

	new->len = _strlen(str);
	new->next = *head;

	*head = new;

	return (new);
}
