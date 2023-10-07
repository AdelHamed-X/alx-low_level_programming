#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *array = NULL;

    array = (hash_table_t)malloc(size * hash_node_s);
    if (array == NULL)
        return (NULL);

    return (array);
}