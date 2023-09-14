#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new;
	unsigned int counter = 0;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (tmp)
	{
		if (counter == idx)
		{
			new->prev = tmp->prev;
			new->next = tmp;

			tmp->prev = new;
			new->prev->next = new;
			return (new);
		}
		counter++;
		tmp = tmp->next;
	}
	return (NULL);
}
