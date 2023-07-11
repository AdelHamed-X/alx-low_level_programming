#include "main.h"

/**
 * _strlen - calculates the length of a string
 *@s: a pointer to the first char of the string
 *Return: size
 */
int _strlen(char *s)
{
	int size = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		size++;
	}
	return (size);
}
