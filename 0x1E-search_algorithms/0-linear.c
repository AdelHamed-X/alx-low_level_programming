#include "search_algos.h"

/**
 * linear_search - uses linear search algorithm
 * 
 * @array: a pointer to an array
 * @size: the size of array
 * @value: the value of the element to be matched
 * 
 * Return: the index of the matched element.
*/
int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    if (array)
    {
        while (i < size)
        {
            if (value == array[i])
            {
                printf("Value checked array[%li] = [%i]\n", i, array[i]);
                return (i);
            }
            printf("Value checked array[%li] = [%i]\n", i, array[i]);
            i++;
        }
    }
    return (-1);
}