#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints all types of data
 * @format: the type of data
 */
void print_all(const char * const format, ...)
{
	int j;
	int len;
	va_list list;

	j = len = 0;

	while (format[len] != '\0')
	{
		len++;
	}
	
	va_start(list, format);
	while (j < len)
	{
		if (format[j] == 'c')
		{
			printf("%c", va_arg(list, int));
		}
		else if (format[j] == 'i')
		{
			printf("%i", va_arg(list, int));
		}
		else if (format[j] == 'f')
		{
			printf("%f", va_arg(list, double));
		}
		else if (format[j] == 's')
		{
			if (!va_arg(list, char *))
				printf("(nil)");
			else
				printf("%s", va_arg(list, char *));
		}
		else
			continue;
		j++;
	}
	printf("\n");
	va_end(list);
}
