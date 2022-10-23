#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: list node
 *
 * Return: list
 */

size_t print_list(const list_t *h)
{
	
	while (h != NULL)
	{

		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			printf("[%d] %s\n", h->len, h->str);
			return (2);
		}


		else if (h != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		
		}
	}
	
	printf("\n");
	

	return (2);
}

