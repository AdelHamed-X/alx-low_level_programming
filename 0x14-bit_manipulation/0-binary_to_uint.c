#include "main.h"
#include <math.h>
/**
 * binary_to_uint - converts binary to int
 * @b: a pointer to the binary string
 * Return: the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum_all = 0;
	int i, len = 0, pow = 1;

	if (!b)
		return (0);

	for (i = 0; b[i] ; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			sum_all += pow;
		}
		pow *= 2;
	}

	return (sum_all);
}
