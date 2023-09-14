#include "lists.h"

/**
  * print_dlistint - prints all the elements in a list
  * @h: a constant pointer to the head node
  * Return: the number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
    const dlistint_t *temp = h;
    int counter = 0;

    if (temp == NULL)
        return (0);

    while (temp)
    {
        printf("%i\n", temp->n);
        temp = temp->next;
        counter++;
    }
    return (counter);
}