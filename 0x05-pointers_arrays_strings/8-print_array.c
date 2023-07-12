#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 */
void print_array(int *s, int n);
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", s[i]);
		if (i == n - 1)
		{
			break;
		}
		printf(", ");
	}
	printf("\n");
}
