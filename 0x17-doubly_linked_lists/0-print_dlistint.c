#include "lists.h"

/**
  * print_dlistint - a function that prints all the elements of a list
  * @h: head node
  * Return: All element in a list
  */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
