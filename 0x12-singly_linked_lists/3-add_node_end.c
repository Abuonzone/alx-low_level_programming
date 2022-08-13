#include "lists.h"

/**
 * add_node_end - add a new node at the end of a list_t list
 * @head: pointer to pointer
 * @str: string parameter
 * Return: the address of then new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;

	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	list_t *last = *head;

	new_node->str = strdup(str);
	for (i = 0; new_node->str[i]; i++)
		;
	new_node->len = i;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (new_node);
}
