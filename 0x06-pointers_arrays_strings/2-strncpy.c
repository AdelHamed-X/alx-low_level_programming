#include "main.h"

/**
 * _strncpy - copies n number of chars from src string to dest string
 *@dest: a pointer to the destination string
 *@src: a pointer to the source string
 *@n: the number of chars to be copied
 *Return: dest Always
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

