#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

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
		if (va_arg(args, char *))
		{
			printf("%s", va_arg(args, char *));
		}
		else
		{
			printf("(nil)");
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
