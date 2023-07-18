#include "main.h"

/**
 * reverse_array - reverses an array
 *
 */
void reverse_array(int *a, int n)
{
	int i, j, x, b[n]; 

	x = n - 1;

	for (i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
	
	for (j = 0; j < n; j++)
	{
		a[j] = b[x - j];
	}
}
