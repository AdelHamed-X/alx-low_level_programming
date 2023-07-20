#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints stiring passed to the function
 * @separator: a string that separates numbers
 * @n: the number of ints passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(args, char *) == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", va_arg(args, char *));
		}

		if (i == (n - 1))
		{
			break;
		}
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
