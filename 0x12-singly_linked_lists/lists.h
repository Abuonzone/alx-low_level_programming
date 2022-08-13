#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: Length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* print all element of list_t */
size_t print_list(const list_t *h);

/* Return number of elements in list_t */
size_t list_len(const list_t *h);

/* Add a new node at beginning of list_t */
list_t *add_node(list_t **head, const char *str);

/* add a new node to the end of list_t */
list_t *add_node_end(list_t **head, const char *str);

/* free list_t */
void free_list(list_t *head);

#endif /* LISTS_H */
