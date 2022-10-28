#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *node = malloc(sizeof(listint_t));
	int count = 0;

	node = h;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		if (node->n)
		{
			count++;
		}
		node = node->next;
	}

	return (count);
}
