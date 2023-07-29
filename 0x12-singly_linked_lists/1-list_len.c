#include "lists.h"

/**
 * list_len - prints the number of elements in a list
 * @h: a poiner
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (!h)
	{
		n++;
	}
	printf("-> %u elements\n", n);
	return (n);
}
