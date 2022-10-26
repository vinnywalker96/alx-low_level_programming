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


/**
 * _strlen - counts number of character
 * @s: takes str as argument
 * Return: integer
 */

int _strlen(const char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len = len + 1;
		s = s + 1;
	}

	return (len);
}


/**
 * _strdup - copies str to new location
 * @str: input str
 * Return: new copy
 */

char *_strdup(const char *str)
{
	int len;
	char *new, *saved;

	len = _strlen(str);

	new =(char * )malloc(sizeof(len + 1) * sizeof(char));

	if (new == NULL)
		return (NULL);

	saved = new;

	while (*str != '\0')
	{
		*new = *str;
		new = new + 1;
		str = str + 1;
	}

	new = '\0';

	return (saved);

}
