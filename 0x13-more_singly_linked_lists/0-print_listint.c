#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		if (h->n)
		{
			count++;
		}
		h = h->next;
	}
	return (count);
}
