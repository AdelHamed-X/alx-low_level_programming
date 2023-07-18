#include "main.h"

/**
 * reverse_array - reverses an array
 *@a: a pointer to an array
 *@n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int temp, j;

	for (j = 0; j < n / 2; j++)
	{
		temp = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] =  temp;
	}
}
