#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (-a);
	}
	else
	{
		return (a);
	}
	_putchar('\n');
}
