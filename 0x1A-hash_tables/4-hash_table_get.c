#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Hash table
 * @key: Key to search for
 *
 * Return: Value associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *node = NULL;

	if (!ht || !key || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *) key, ht->size);
	node = (ht->array)[i];
	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
