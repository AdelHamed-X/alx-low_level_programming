#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints all types of data
 * @format: the type of data
 */
void print_all(const char * const format, ...)
{
	int i;
	int j;
	char _char;
	int _int;
	float _float;
	char *string;
	int len;
	va_list list;

	i = 0;
	j = 0;
	len = 0;

	va_start(list, format);

	while (format[i] != '\0')
	{
		len++;
	}

	while (j < len)
	{
		if (format[j] == 'c')
		{
			_char = va_arg(list, int);
			printf("%c", _char);
		}
		else if (format[j] == 'i')
		{
			_int = va_arg(list, int);
			printf("%i", _int);
		}
		else if (format[j] == 'f')
		{
			_float = va_arg(list, double);
			printf("%f", _float);
		}
		else if (format[i] == 's')
		{
			string = va_arg(list, char *);
			if (!string)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", string);
			}
		}
		else
		{
			continue;
		}

		j++;
	}
	printf("\n");

	va_end(list);
}
