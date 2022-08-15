#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list and returns
 * the head node's data(n)
 * Return: 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	temp = *head;
	while ((temp = current) != NULL)
	{
		current = current->next;
	}
	return ((*head)->n);
}
