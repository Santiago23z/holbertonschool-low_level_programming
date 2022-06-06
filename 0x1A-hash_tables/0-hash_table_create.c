#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 *
 * Return: the new hash table, NULL if something is wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *create = NULL;

	if (size == 0)
		return (NULL);
	create = malloc(sizeof(hash_table_t));
	if (!create)
		return (NULL);
	create->size = size;
	create->array = malloc(sizeof(create) * size);
	if (!create->array)
		return (NULL);
	return (create);
}
