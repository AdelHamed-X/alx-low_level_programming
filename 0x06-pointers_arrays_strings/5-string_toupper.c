#include "main.h"

/**
 * string_toupper - converting all ht elowercase letters in astring to its uppercase
 *@s: a pointer to the string
 *Return: the resulting string
 */
char *string_toupper(char *s)
{
	
	while (*s != '/0')
	{
		if (*s >= 97 && *s =< 122)
		{
			*s = *s - 32;
		}
	}
	return (s);
}
