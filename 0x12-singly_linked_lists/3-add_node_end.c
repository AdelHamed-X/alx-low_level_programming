#include "lists.h"

/**
 * add_node_end - adds a new node to the end of the list
 * @head: a pointer to a pointer
 * @str: a pointer
 * Return: the address of the new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;

	if (*head == NULL)
	{
		(*head) = new;
		return (new);
	}
	
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;
	return (new);
}
