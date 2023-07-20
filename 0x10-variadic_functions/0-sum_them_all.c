#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all the passed arguments
 * @n: the number of passed arguments
 * Return: reslult
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		int x;
                int result;
                unsigned int i;

		va_list args;

		va_start(args, n);

		result = 0;

		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			result += x;
		}

		va_end(args);

		return (result);
	}
	else
		return (0);
}
