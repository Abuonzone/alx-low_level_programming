#include "lists.h"

/**
 * sum_listint - sum all the data (n) of a linked list
 * @head: pointer to a linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	int i = 0;

	for (i = 0; head != NULL; i++)
	{
		head = head->next;
		sum += head->n;
	}
	return (sum);
}

