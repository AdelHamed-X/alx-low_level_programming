#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *array = NULL;

	array = (hash_table_t *)malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	return (array);
}
