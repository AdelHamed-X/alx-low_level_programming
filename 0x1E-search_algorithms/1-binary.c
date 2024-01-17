#include "search_algos.h"

/**
 * 
*/
void print_array(int *arr, size_t left, size_t right)
{
    size_t i;

    for (i = left; i <= right; i++)
    {
        printf("%i", arr[i]);
        if (i != right)
            printf(", ");
    }
    printf("\n");
}

int middle_index_func(size_t size)
{
    if (size % 2 == 0)
            return (size / 2 - 1);
        else
            return ((size - 1) / 2);
}

/**
 * binary_search - uses binary search algorithm
 * 
 * @array: a pointer to the array
 * @size: the array size
 * @value: the matching value
 * 
 * Return: the index of the matched element.
*/
int binary_search(int *array, size_t size, int value)
{
    size_t left, right, middle;

    left = 0;
    right = size - 1;
here:
    while (left < right)
    {
        printf("Searching in array: ");
        print_array(array, left, right);

        middle = floor((left + right) / 2);

        if (array[middle] < value)
        {
            left = middle + 1;
            goto here;
        }
        else if (array[middle] > value)
        {
            right = middle - 1;
            goto here;
        }
        else
            return (middle);
    }
    return (-1);
}