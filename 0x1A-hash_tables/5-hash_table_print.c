#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 * Return: a dictionary format of the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int idx = 0, i;
	hash_node_t *node = NULL, *last_print = NULL;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
			last_print = ht->array[i];
	}
	printf("{");
	while (idx < ht->size)
	{
		node = ht->array[idx];
		while (node)
		{
			printf("'%s': '%s'", node->key, node->value);
			if (node->next)
				printf(", ");
			node = node->next;
		}
		if (ht->array[idx] != last_print && ht->array[idx])
			printf(", ");
		idx++;
	}
	printf("}\n");
}
