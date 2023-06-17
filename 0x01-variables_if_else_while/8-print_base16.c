#include <stdio.h>
#include <string.h>

/**
 * main - prints the alphabet
 * Return: always 0
 */

int main(void)
{
	int letter;

	for (letter = '0'; letter <= '9'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
