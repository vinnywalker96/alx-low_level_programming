#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to use
 * @key: key of the hash table
 * @value: data passed to the hash table
 * Returns: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = hash_djb2((unsigned char *)key);

	hash_node_t *new_node = malloc(sizeof(hash_node_t ));
	if (new_node == NULL)
		return (0);
	new_node->key = key;
	new_node->value = value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
