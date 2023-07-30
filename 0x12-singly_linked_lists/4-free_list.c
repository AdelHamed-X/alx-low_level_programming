#include "lists.h"

/**
 *
 *
 *
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = NULL;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
