#include "main.h"

/**
 * puts_half - prits the 2nd half of a string
 *@str: a pointer
 */
void puts_half(char *str)
{
	int i, len1, len2;

	len = 0;
	while (str[len1] != '\0')
	{
		len1++;
	}
	if (len1 % 2 != 0)
	{
		len2 = len1 + 1;
	}
	for (i = (len2 / 2); i < len1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
