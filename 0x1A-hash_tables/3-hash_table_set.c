#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds a node to the hash table
 * @ht: Pointer to the node to update
 * @key: Key
 * @value: Value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (!key || *key == '\0' || !value)
		return (0);

	if (!ht)
		ht = hast_table_create(1024);
	index = key_index((const unsigned char *) key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	if (!node->key || !node->value)
	{
		free(node);
		return (0);
	}
	node->next = NULL;
	if (!(ht->array)[index])
		(ht->array)[index] = node;
	else
	{
		node->next = (ht->array)[index];
		(ht->array)[index] = node;
	}
	return (1);
}
