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
		dest[dest_len] = src[src_len];
		src_len++;
		dest_len++;
	}

	_putchar('\0');

	return (dest);
}
