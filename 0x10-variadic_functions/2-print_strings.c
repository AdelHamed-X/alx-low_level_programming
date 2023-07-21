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
	char *str;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (!str)
			printf("(nil)");
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");

	va_end(args);
}
