#include "main.h"

/**
 * _strcpy - copies 2 strings
 *@dest: a pointer
 *@src: a pointer
 *Return: the pointer to the dest array
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
