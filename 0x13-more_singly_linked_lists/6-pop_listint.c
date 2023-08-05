#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: a pointer
 * Return: the new node data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!(*head))
		return (0);

	n = (*head)->n;

	temp = (*head);
	(*head) = (*head)->next;
	free(temp);
	return (n);
}
