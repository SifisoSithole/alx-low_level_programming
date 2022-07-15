#include <stdlib.h>
#include "lists.h"

/**
 * list_len - This function counts the number of nodes in  linked list
 * @h: Address of a linked list
 *
 * Return: Lenght of list
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
