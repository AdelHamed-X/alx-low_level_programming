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
		free(head->str);
		head = head->next;
		free(tmp);
	}
}
