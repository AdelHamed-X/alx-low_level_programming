#include "lists.h"

/**
 * print_listint - prints the elements of list
 * @h: a pointer
 * Return: the elements of list
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%i\n", h->n);

		h = h->next;
		n++;
	}

	return (n);
}
