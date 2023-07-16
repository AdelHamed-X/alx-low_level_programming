#include "main.h"

/**
 * _strcat - concatenates 2 strings with each other
 *@dest: str 1 pointer
 *@src: str 2 pointer
 *Return: dest Always
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, src_len;

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

	dest[dest_len] = '\0';

	return (dest);
}
