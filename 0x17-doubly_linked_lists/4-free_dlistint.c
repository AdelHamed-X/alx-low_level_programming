#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (temp == NULL)
		return;

	while (temp->prev)
	temp = temp->prev;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
