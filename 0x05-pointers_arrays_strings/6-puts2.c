#include "main.h"

/**
 * puts2 - prints every other char
 *@str" a pointer
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
}
