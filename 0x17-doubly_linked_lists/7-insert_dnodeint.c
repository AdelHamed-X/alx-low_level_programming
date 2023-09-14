#include "lists.h"

/**
 *
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *tmp = *h;
    dlistint_t *new;
    unsigned int counter = 0;

    new = (dlistint_t *)malloc(sizeof(dlistint_t));
    if (!new)
        return (NULL);

    new->n = n;

    while (tmp)
    {
        if (counter == idx)
        {
            new->prev = tmp->prev;
            new->next = tmp;

            tmp->prev = new;
            new->prev->next = new;
            return (new);
        }
        counter++;
        tmp = tmp->next;
    }
    return (NULL);
}
