#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
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
