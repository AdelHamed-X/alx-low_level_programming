#include "main.h"

/**
 *
 *
 *
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, src_len, i, j;
	
	dest_len = src_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[src_len] != '\0')
	{
		src_len++;
	}

	for (i = 0; i < dest_len; i++)
	{
		_putchar(dest[i]);
	}
	_putchar(' ');

	for (j = 0; j < src_len; j++)
	{
		_putchar(src[j]);
	}
	_putchar('\0');

	return (dest);
}
