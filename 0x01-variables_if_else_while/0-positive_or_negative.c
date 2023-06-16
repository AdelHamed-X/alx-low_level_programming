#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints if n is positive or negative or 0
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("0 is zero\n");
	return (0);
}
