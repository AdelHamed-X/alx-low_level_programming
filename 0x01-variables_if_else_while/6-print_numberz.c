#include <stdio.h>
#include <string.h>

/**
 * main - prints all numbers
 * Return: always 0
 *
 */

int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
