#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *array = NULL;

	array = (hash_table_t *)malloc((sizeof(hash_node_t *) * size) + 1);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	return (array);
}

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(2048);
    printf("%p\n", (void *)ht);
    return (EXIT_SUCCESS);
}
