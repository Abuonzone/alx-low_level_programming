#include "lists.h"

/**
 * sum_listint - sum all the data (n) of a linked list
 * @head: pointer to a linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		head = head->next;
		if (head != NULL)
			sum += head->n;
	}
	return (sum);
}

