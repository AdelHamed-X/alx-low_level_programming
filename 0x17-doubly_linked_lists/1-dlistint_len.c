#include "lists.h"

/**
  * dlistint_len - prints the length of a list
  * @h: a pointer to the head node
  * Return: the length of the list
  */
size_t dlistint_len(const dlistint_t *h)
{
    const dlistint_t *temp = h;
    int len = 0;

    if (!temp)
        return (len);

    while (temp->prev)
    {
        temp = temp->prev;
    }

    while (temp)
    {
        len++;
        temp = temp->next;
    }

    return (len);
}