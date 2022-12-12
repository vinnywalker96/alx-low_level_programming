#include "lists.h"

/**
  * dlistint_len - function that returns the number of elements in a list
  * @h: head node
  * Return: Number of item in a list
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
