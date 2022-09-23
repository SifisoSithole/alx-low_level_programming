#include "hash_tables.h"

/**
 * key_index - Returns the index of a key
 * @key: key
 * @size: Size of the array of the hash table
 *
 * Return: Index where the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
