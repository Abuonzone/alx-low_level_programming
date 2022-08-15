#include "lists.h"

/**
 * print_listint - print all the elements of listint_t list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
