#include "hash_tables.h"

/**
 * hash_djb2 - hash function implements djb2 algorithm
 * @str: pointer to key
 * Return: index in the hash table
 */
unsigned long int hash_djb2(char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
