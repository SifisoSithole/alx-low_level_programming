#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates an orderded hash table
 * @size: Size of the table
 *
 * Return: Hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *hash_table = malloc(sizeof(shash_table_t));

	if (!hash_table)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(shash_node_t **) * size);
	hash_table->shead = NULL;
	hash_table->stail = NULL;
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		(hash_table->array)[i] = NULL;
	return (hash_table);
}

/**
 * sort_new_node - Inserts the new node in the correct spot int the sorted list
 * @ht: Hash table
 * @node: Node to insert into the sorted list
 */
void sort_new_node(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *h;

	if (!ht->shead)
	{
		ht->shead = node;
		ht->stail = node;
		return;
	}
	h = ht->shead;
	if ((node->key)[0] < (ht->shead->key)[0])
	{
		h->sprev = node;
		node->snext = h;
		ht->shead = node;
		h = NULL;
	}
	while (h)
	{
		if (!h->snext)
		{
			node->sprev = h;
			h->snext = node;
			break;
		}
		if ((h->snext->key)[0] < (node->key)[0])
		{
			h = h->snext;
			continue;
		}
		h->snext->sprev = node;
		node->snext = h->snext;
		h->snext = node;
		node->sprev = h;
		break;
	}
	if ((node->key)[0] > (ht->stail->key)[0])
		ht->stail = node;
}

/**
 * shash_table_set - Adds a node to the hash table
 * @ht: Pointer to the node to update
 * @key: Key
 * @value: Value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node = NULL;

	if (!ht || !key || *key == '\0')
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = NULL;
	node->snext = NULL;
	node->sprev = NULL;
	if (!(ht->array)[index])
		(ht->array)[index] = node;
	else
	{
		node->next = (ht->array)[index];
		(ht->array)[index] = node;
	}
	sort_new_node(ht, node);
	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key
 * @ht: Hash table
 * @key: Key to search for
 *
 * Return: Value associated with key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	shash_node_t *node = NULL;

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


/**
 * shash_table_print - Prints a hash table
 * @ht: Pointer to the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node = NULL;
	int com = 0;

	if (!ht)
		return;

	printf("{");
	node = ht->shead;
	while (node)
	{
		if (com)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		com = 1;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a hash table in rev
 * @ht: Pointer to the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node = NULL;
	int com = 0;

	if (!ht)
		return;

	printf("{");
	node = ht->stail;
	while (node)
	{
		if (com)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		com = 1;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a hash table
 * @ht: Hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp_node;

	if (!ht)
		return;

	node = ht->shead;
	while (node)
	{
		temp_node = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp_node;
	}
	free(ht->array);
	free(ht);
}
