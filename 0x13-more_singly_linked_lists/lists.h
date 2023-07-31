#ifndef LISTS_H
#define LISTS_H

/**
 * struct listint_t - singly linked list
 * @n: integer stored in the node
 * @next: pointer to the next node
 *
 * Description: A structure representing a singly linked list node.
 */
typedef struct listint_t
{
	int n;
	struct listint_t *next;
} listint_t;

#include <stdio.h>

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
#endif
