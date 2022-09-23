#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int com = 0;
	hash_node_t *node = NULL;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = (ht->array)[i];
		while (node)
		{
			if (com)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			com = 1;
		}
	}
	printf("}\n");
}
