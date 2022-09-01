#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - This function prints all of the elements in a list
 * @h: head of the list
 *
 * Returns: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
