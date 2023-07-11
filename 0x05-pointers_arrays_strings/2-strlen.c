#include "main.h"

/**
 *
 *
 *
 */
int _strlen(char *s)
{
	int size;

	size = sizeof(s) / (sizeof(*s) / 2);
	return size;
}
