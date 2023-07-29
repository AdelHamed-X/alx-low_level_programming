#include "lists.h"

/**
 * add_node - adds a new node to the begginning
 * @head: a pointer
 * @str: a pointer
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new)
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);;
		}
		new->next = *head;

		*head = new;
	}
	else
	{
		free(new);
	}
	return (*head);
}
