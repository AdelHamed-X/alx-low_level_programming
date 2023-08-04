#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of a linked list
 * @head: a pointer to the header pointer
 * @n: the value of int in the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	
	new->next = NULL;
	new->n = n;
	
	if ((*head) == NULL)
	{
		(*head) = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	
	temp->next = new;
	return (new);
}
