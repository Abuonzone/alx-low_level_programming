#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning of a linked list
 * @head: the head node parameter
 * @n: integer
 * Return: the address of the element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
