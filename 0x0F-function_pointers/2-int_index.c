#include "function_pointers.h"

/**
 * int_index - is finding the index of an int
 * @array: a pointer to an array
 * @size: the size of the array
 * @cmp: a pointer to the function to be used
 * Return: the index of the required int or -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array && cmp)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
				return (index);
		}
	}

	return (-1);
}
