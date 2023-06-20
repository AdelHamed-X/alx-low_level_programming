#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: an int
 * Return: the last digit of number n
 */
int print_last_digit(int n)
{
	int last;

	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}
