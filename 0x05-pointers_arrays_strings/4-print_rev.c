#include "main.h"

/**
 *
 *
 *
 *
 */
void print_rev(char *s)
{
	int i;
	int j;
	int len;

	while (i != '\n')
	{
		i++;
	}
	
	len = i;
	for (j = len; len >= 0; j--)
	{
		_putchar('s[j]');
	}
	_putchar('\n');
}
