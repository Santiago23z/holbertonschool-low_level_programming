#include "hash_tables.h"

/**
 * hash_table_set - function to set the values
 * @ht: pointer to the table
 * @key: key to store and find
 * @value: value to store
 * Return: 1 if succes or 0 if fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (!ht)
		return (0);
	if (!key)
		return (0);
	if (!value)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = NULL;
		ht->array[index] = node;
		return (1);
	}
	else
	{
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}
	return (0);
}
