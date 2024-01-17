#include "search_algos.h"

/**
 * print_array - prints an array of characters
 * 
 * @arr: a pointer to the array to print
 * @left: the start of the array
 * @right: the end of the array
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

    while (left <= right)
    {
        printf("Searching in array: ");
        print_array(array, left, right);

        middle = floor((left + right) / 2);

        if (array[middle] < value)
        {
            left = middle + 1;
        }
        else if (array[middle] > value)
        {
            right = middle - 1;
        }
        else
            return (middle);
    }
    return (-1);
}