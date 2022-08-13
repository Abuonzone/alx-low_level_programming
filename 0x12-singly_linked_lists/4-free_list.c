#include "lists.h"

/**
 * free_list(list_t *head)
 * @head: The linked list to free
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
