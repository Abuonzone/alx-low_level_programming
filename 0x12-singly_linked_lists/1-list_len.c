#include "lists.h"

/**
 * list_len - returns the number of elemnts in a linked list_t list.
 * @h: pointer to structure list_t
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

