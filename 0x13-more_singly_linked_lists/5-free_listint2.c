#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: linked list to free
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
