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
