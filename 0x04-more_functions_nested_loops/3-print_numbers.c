#include "main.h"

/**
 * print_numbers - prints the numberes till 9
 * Return: 0
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
