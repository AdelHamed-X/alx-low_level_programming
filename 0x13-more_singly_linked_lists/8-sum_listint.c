#include "lists.h"

/**
 * sum_listint - sums the data in the nodes
 * @head: a pointer
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	unsigned int len = 0, result = 0, i;

	if (!head)
		return (0);

	temp = head;

	for (i = 0; temp != NULL; i++)
	{
		len++;
		temp = temp->next;
	}

	temp = head;
	for (i = 0; i < len; i++)
	{
		result += temp->n;
		temp = temp->next;
	}

	return (result);
}
