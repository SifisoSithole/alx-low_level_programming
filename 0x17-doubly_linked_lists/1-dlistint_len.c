#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - Returns the number of elements
 * @h: pointer to the head
 *
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
