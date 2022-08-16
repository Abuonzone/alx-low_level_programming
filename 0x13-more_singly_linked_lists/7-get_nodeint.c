#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linkedlist
 * @head: linked list
 * @index: index of node to return
 * Return: node at index or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;
	listint_t *prev = head;

	for (i = 0; i < index; i++)
	{
		if (i == 0 && index == 1)
		{
			head = temp->next;
			return (head);
		}
		else
		{
			if (i == index - 1 && temp)
			{
				prev->next = temp->next;
				return (temp);
			}
			else
			{
				prev = temp;
				if (prev == NULL)
				{
					break;
				}
				temp = temp->next;
			}
		}
	}
	return (NULL);
}

