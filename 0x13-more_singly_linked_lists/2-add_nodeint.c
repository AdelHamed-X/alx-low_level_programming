#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning
 * @head: a pointer to another pointer
 * @n: a number
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!head)
		return (NULL);

	new->next = *head;
	new->n = n;
	*head = new;

	return (new);
}
