#include "lists.h"

/**
 * print_list - prints the contents of all the nodes
 * @h: a pointer to the first node
 * Return: the number of elements
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
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
