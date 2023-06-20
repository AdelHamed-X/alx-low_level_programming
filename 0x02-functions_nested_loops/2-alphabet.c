#include "main.h"

/**
 * main - prints the alphabet in lowercase followd by a new line.
 */
int main(void)
{
	void print_alphabet(void)
	{
		for (int i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
