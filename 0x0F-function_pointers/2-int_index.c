#include "function_pointers.h"

/**
 * int_index - is finding the index of an int
 * @array: a pointer to an array
 * @size: the size of the array
 * @cmp: a pointer to the function to be used
 * Return: the index of the required int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
		return (-1);
	for (index = 0; index <= size; index++)
	{
		if (index == size)
			return (-1);
		if (cmp(array[index]) != 0)
			return (index);
		continue;
	}
	return (index);
}
