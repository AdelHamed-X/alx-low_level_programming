#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 */
int _abs(int a)
{
	if (a < 0)
	{
		int c;

		c = a * -1;
		_putchar(c);
	}
	else
	{
		_putchar(a);
	}
}
