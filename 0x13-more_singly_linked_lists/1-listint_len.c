#include "lists.h"

/**
 * listint_len - return the number of element in a linked list
 * @h: linked list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
