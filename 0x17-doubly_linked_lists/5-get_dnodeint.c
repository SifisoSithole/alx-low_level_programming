#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of dlistint_t linked list
 * @head: Pointer to the head of the node
 * @index: Index of the node
 *
 * Return: Pointer to the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;
	dlistint_t *h = head;

	while (h)
	{
		if (i == index)
			return (h);
		i++;
		h = h->next;
	}
	return (NULL);
}
