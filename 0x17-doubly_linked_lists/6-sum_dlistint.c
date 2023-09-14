#include "lists.h"

/**
 * sum_dlistint - sums all the n elements in a list
 * @head: a pointer to the head node
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
    dlistint_t *tmp = head;
	int result = 0;

	while (tmp)
	{
	    result += tmp->n;
		tmp = tmp->next;
	}
	return (result);
}