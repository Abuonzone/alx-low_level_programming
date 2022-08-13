#include "lists.h"

/**
 * free_list(list_t *head)
 * @head: The linked list to free
 * Return: void
 */
void free_list(list_t *head)
{
	free(head->str);
	free(head);
}
