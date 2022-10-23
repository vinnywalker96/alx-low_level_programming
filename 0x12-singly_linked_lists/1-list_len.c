#include "lists.h"

/**
 * list_len - returns the number of elements in a linked
 * @h: list node
 * Return: number of items
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}

