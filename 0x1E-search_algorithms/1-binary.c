#include "search_algos.h"

/**
 * 
*/
void print_array(int *arr, size_t size)
{
    size_t i;

    for (i = 0; i < size; i++)
    {
        printf("%i", arr[i]);
        if (i != size - 1)
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
    size_t new_size, middle_index, i, j;
    int result, *new_arr;

    if (array && size > 0)
    {
        printf("Searching in array: ");
        print_array(array, size);
        middle_index = middle_index_func(size);
        printf("middle index: %li\n", middle_index);
        
        if (value == array[middle_index])
            return (middle_index);
        else if (value > array[middle_index])
        {
            new_size = size - (middle_index + 1);
            new_arr = malloc(sizeof(int) * new_size);
            middle_index = middle_index_func(new_size);

            for (i = middle_index + 1, j = 0; i < size; i++, j++)
                new_arr[j] = array[i];

            result = binary_search(new_arr, new_size, value);

            return (result);
        }
        else if (value < array[middle_index])
        {
            new_size = middle_index;
            new_arr = malloc(sizeof(int) * new_size);
            middle_index = middle_index_func(new_size);

            for (i = 0; i < middle_index; i++)
                new_arr[i] = array[i];
            
            result = binary_search(new_arr, new_size, value);

            return (result);
        }
    }
    return (-1);
}