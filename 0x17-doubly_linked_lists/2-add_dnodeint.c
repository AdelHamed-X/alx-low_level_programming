#include "lists.h"

/**
  * add_dnodeint - adds a new node at the beginning of a list
  * @head: double pointer
  * @n: the element of a new node
  * Return: the address of the new node
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;

	if (!(*head))
	{
		*head = new;
		return (new);
	}

	if ((*head)->prev)
	{
		*head = (*head)->prev;
	}

	(*head)->prev = new;
	*head = new;

	return (new);
}
