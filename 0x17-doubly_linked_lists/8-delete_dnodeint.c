#include "lists.h"

/**
 *
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *tmp = *head;
    unsigned int loop_cycle = 1;

    if (index == 0)
    {
        if (*head != NULL)
        {
            *head = (*head)->next;
            if (*head != NULL)
                (*head)->prev = NULL;
            free(tmp);
            return (1);
        }
        return (0);
    }

    while (tmp->prev != NULL)
    {
        tmp = tmp->prev;
    }

    for (loop_cycle = 0; tmp != NULL && loop_cycle < index; loop_cycle++)
        tmp = tmp->next;

    if (tmp->next == NULL)
    {
        tmp->prev->next = NULL;
        free(tmp);
    }
    else
        tmp->next->prev = tmp->prev;


    tmp->prev->next = tmp->next;
    free(tmp);
    return (1);
}
