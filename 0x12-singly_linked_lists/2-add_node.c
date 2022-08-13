#include "lists.h"

/**
 * add_node - adds a new node to the beginning of list_t list
 * @head: pointer to pointer parameter
 * @str: string parameter
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;

	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	for (i = 0; new_node->str[i]; i++)
		;
	new_node->len = i;
	new_node->next = (*head);
	(*head) = new_node;
	if (new_node)
		return (new_node);
	else
		return (NULL);
}
