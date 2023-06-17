#include <stdio.h>
#include <string.h>

/**
 * main - prints the alphabet
 * Return: always 0
 *
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
