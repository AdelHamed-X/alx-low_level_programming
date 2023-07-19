#include "function_pointers.h"

/**
 * array_iterator - applies the function to every element in an array
 * @array: a pointer to an array
 * @size: size of the array
 * @action: a funtion pointer to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
