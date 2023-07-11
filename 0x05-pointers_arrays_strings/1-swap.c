#include "main.h"

/**
 * swap_int - swaps the values of 2 ints
 *@a: a pointer
 *@b: a pointer
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
