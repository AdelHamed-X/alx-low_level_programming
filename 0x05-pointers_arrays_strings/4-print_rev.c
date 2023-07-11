#include "main.h"

/**
 * print_rev - prints the string in reverse
 *@s: a pointer
 */
void print_rev(char *s)
{
	int i;
	int j;
	int len;

	while (s[i] != '\0')
	{
		i++;
	}
	
	len = i;
	for (j = len; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

