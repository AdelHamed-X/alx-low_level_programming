#include <stdio.h>
#include <string.h>

/**
 * main - prints the alphabet
 * Return: always 0
 *
 */

int main(void)
{
	char test[] = "abcddefghijklmnopqrstuvwxyz";

	for (int i = 0; i < strlen(test); i++)
	{
		putchar(test[i]);
	}
}
