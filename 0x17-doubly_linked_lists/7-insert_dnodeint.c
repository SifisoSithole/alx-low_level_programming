#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Head of the node
 * @idx: Index of the node
 * @n: Integer to add
 *
 * Return: Pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *h = *head, *new = NULL;
	
	if (!head || !*head)
		new = add_dnodeint(head, n);
	while (h)
	{
		if (i == idx)
		{
			if (h->next)
			{
				new = malloc(sizeof(dlistint_t));
				if (!new)
					return (NULL);
				new->n = n;
				new->next = h;
				h->prev->next = new;
				new->prev = h->prev;
				h->prev = new;
			}
			else
				new = add_dnodeint_end(head, n);
		}
		i++;
		h = h->next;
	}
	return (new);
}
