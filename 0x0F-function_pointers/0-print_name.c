#include "function_pointers.h"

/**
 * print_name - prints any name
 * @name: a pointer to a characters array
 * @f: a pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	int i;

	i = 0;
	
	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}
}
