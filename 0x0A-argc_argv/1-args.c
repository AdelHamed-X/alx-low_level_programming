#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of passed arguments
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
