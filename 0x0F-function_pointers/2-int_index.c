#include "function_pointers.h"

/**
 * int_index - is finding the index of an int
 * @array: a pointer to an array
 * @size: the size of the array
 * @cmp: a pointer to the function to be used
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return index;
		continue;
	}
	return index;
}
