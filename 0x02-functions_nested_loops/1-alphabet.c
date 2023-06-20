#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase followd by a new line.
 *
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
