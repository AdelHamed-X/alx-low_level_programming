#include "lists.h"

/**
 * listint_len - prints the number of elements of list
 * @h: a pointer
 * Return: the number of elements of list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}
