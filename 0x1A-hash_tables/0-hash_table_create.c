#include "hash_tables.h"
/**
 * hash_table_create - function that creates a has table
 * @size: insigned long int size
 * Return: hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *table = NULL;
    
    table = malloc(sizeof(hash_table_t));
    if (table == NULL)
        return (NULL);
    
    table->size = size;
    table->array = malloc(sizeof(hash_node_t) * size);
    if (table->array == NULL)
        return (NULL);
    return (table);
}
