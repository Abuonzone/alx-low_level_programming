#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list and returns
 * the head node's data(n)
 * @head: linked list
 * Return: 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;
	listint_t *current;

	if (*head == NULL)
		return (0);
	temp = *head;
	current = temp->next;
	num = temp->n;

	free(temp);
	*head = current;
	return (num);
}
