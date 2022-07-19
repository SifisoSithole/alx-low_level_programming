#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - This function adds a new node at a given position
 * @head: Pointer to the head of the list
 * @idx: index of the list where to insert the new node
 *
 * Returns the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *h;

	if (!head || !*head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	
	new->n = n;
	h = *head;
	while (h)
	{
		if (i == (idx - 1))
		{
			new->next = h->next;
			h->next = new;
			return (new);
		}
		h = h->next;
		i++;
	}
	return (NULL);
}
