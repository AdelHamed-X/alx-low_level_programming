#include "lists.h"

/**
 *
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while(h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			n++;
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
			n++;
		}
		h = h->next;
	}

	return (n);
}
