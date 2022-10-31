#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: head node
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = (*head), *prev;

	

	if (temp != NULL)
	{
		(*head) = temp->next;
		free(temp);
		return (1);
		
		
	}

	while (temp != NULL)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
	{
		return (0);
	}
	

	prev->next = temp->next;

	free(temp);
	return (0);
}
