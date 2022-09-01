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
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *p = *h, *new = NULL;

	if (!h || !*h)
		new = add_dnodeint(h, n);
	while (p)
	{
		if (i == idx)
		{
			if (p->next)
			{
				new = malloc(sizeof(dlistint_t));
				if (!new)
					return (NULL);
				new->n = n;
				new->next = p;
				p->prev->next = new;
				new->prev = p->prev;
				p->prev = new;
			}
			else
				new = add_dnodeint_end(h, n);
		}
		i++;
		p = p->next;
	}
	return (new);
}
