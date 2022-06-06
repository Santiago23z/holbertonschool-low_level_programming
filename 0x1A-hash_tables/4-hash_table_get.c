#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: key to be searched
 *
 * Return: the value of the key, NULL if something is wrong
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int idx = 0;
	hash_node_t *node = NULL;

	if (!ht || !key || strcmp(key, "") == 0)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	node = ht->array[idx];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
