#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: a pointer
 * Return: the new node data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (!(*head) && !head)
		return (0);

	temp = (*head);
	if (temp->next)
	{
		(*head) = (*head)->next;
		free(temp);
		return ((*head)->n);
	} else
	{
		(*head) = NULL;
		free(temp);
		return (0);
}}
