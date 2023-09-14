#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *tmp = head;
    unsigned int counter = 0;

    while (tmp)
    {
        if (counter == index)
            return (tmp);

        tmp = tmp->next;
        counter++;
    }
    return (NULL);
}
