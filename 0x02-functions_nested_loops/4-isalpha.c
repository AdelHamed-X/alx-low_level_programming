#include "main.h"

/**
 * _isalpha - checks if the input is alphabet or not.
 * @c: is an int.
 * Return: 1 is alphabet or 0 is not alphabet
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
