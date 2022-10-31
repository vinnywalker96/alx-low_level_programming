#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: head node
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int num_nodes = 0;


	if (*head == NULL)
	{
		return (-1);
	}

	temp = (*head)->next;
	num_nodes = (*head)->n;
	free(*head);
	*head = temp;

	return (num_nodes);


}
