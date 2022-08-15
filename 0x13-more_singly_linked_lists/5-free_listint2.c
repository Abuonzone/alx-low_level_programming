#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: linked list to free
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	if (*head == NULL)
	{
		free(*head);
	}
	while (current->next != NULL)
	{
		current = current->next;
		free(current);
	}
	free(*head);
}
