#include "main.h"

/**
 *
 *
 */
int power(int base, int exp)
{
	int i, result = 0;

	for (i = exp - 1; i > 0; i--)
	{
		result += (base * base);
	}

	return (result);
}
