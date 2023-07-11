#include "main.h"

/**
 *
 *
 *
 */
int _strlen(char *s)
{
	int size = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		size++;
	}
	return size;
}
