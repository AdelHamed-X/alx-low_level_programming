#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: an int
 * Return: the last digit of number n
 */
int print_last_digit(int n)
{
	_putchar(n % 10 + '0');
	return (n % 10);
}
