#include "lists.h"

/**
 * free_listint2 - frees all the nodes in the list
 * @head: a pointer to the head
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	if (!head)
		return;

	while (tmp)
	{
		tmp = tmp->next;
		free(*head);
		(*head) = tmp;
	}
	(*head) = NULL;
}
