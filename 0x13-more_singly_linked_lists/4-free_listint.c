#include "lists.h"

/**
 * free_listint - frees all the nodes in the list
 * @head: a pointer to the head
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	if (!head)
		return;

	while (tmp)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
