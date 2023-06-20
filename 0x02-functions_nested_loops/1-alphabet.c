#include "main.h"

/**
 * main - prints the alphabet in lowercase followd by a new line.
 * Return: Always (0)
 */
int main(void)
{
	/**
	 * print_alphabet - prints alphabet in lowercase followd by a new line.
	 *
	 */
	void print_alphabet(void)
	{
		for (int i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}

	return (0);
}
