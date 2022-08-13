#include "lists.h"

/**
 * free_list(list_t *head)
 * @head: The linked list to free
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head->len);
		head = head->next;
	}
	free(head);
}
