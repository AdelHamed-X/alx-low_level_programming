#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times.
 */
void print_alphabet_x10(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putcar('\n');
	}
}
