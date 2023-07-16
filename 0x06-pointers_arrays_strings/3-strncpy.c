#include "main.h"

/**
 *
 *
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int src_len, dest_len;

	src_len = dest_len = 0;

	while (src[src_len] != '\0' && src_len < n)
	{
		src_len++;
	}

	int i;

	for (i = 0; i <= src_len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

