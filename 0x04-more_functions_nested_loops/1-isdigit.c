#include "main.h"

/**
 * _isdigit - checks for digits (0 through 9) 
 * @c: an int
 * Return: 1 if digit 0 if not
 */
int _isdigit(int c)
{
    if (c >= 0 && c < 10)
        return 1;
    else
        return 0;
}