#include "main.h"

/**
 * print_sign - prints the sign of number n.
 * @n: is an int.
 * Return: 1 is greater than zero or 0 if zero or -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
