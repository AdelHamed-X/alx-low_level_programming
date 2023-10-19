#include "sort.h"

/**
 * bubble_sort - sorts a list data str. using bubble sort algorithm
 * 
 * @array: a pointer to an array
 * @size: the size of the array 
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int sort_check = 1;

	while (sort_check == 1)
	{
