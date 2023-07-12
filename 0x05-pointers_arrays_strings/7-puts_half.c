#include "main.h"

/**
 * puts_half - prits the 2nd half of a string
 *@str: a pointer
 */
void puts_half(char *str)
{
	int i, len;

	while(len != '\0')
	{
		len++;
	}
	
	if ((len - 1) % 2 != 0)
	{
		len--;
		len--;
	}

	for (i = len / 2; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}	
