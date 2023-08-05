#include "lists.h"

/**
 * get_nodeint_at_index - gets the address of the index node
 * @head: a pointer
 * @index: index
 * Return: the address of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int len = 0, i;

	if (!head)
		return (NULL);

	temp = head;

	for (i = 0; temp != NULL; i++)
	{
		len++;
		temp = temp->next;
	}

	if (index > (len - 1))
		return (NULL);

	temp = head;
	for (i = 0; i < len; i++)
	{
		if (i == index)
			return(temp);

		temp = temp->next;
	}

	return (NULL);
}
