#include "main.h"

/**
 * _isupper - checks for uppercase letter
 * @c: an integer
 * Return: 1 is uppercase 0 if not
 */
int _isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
