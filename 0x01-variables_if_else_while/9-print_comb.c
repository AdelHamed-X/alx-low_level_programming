#include <stdio.h>
#include <string.h>

/**
 * main - prints all combination of single digit
 * Return: always 0
 */

int main(void)
{
	int letter;

	for (letter = '0'; letter <= '9'; letter++)
	{
		putchar(letter);
		if (letter == '9')
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
