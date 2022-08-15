#include "lists.h"

/**
 * free_listint - free a linked list
 * @head: linked list to free
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
