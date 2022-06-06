#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
		free_nodes(ht->array[i]);
	free(ht->array);
	free(ht);
}

/**
 * free_nodes - frees a list of hash nodes
 * @head: first node of the list
 */
void free_nodes(hash_node_t *head)
{
	hash_node_t *tmp = NULL;

	while (head)
	{
		tmp = head->next;
		free(head->value);
		free(head->key);
		free(head);
		head = tmp;
	}
}
