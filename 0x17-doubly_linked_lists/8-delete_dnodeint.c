#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at index 
 * @head: Pointer to the head of the dlistint
 * @index: Index of node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t i = 0;
	dlistint_t *h;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		if (!(**head).next)
		{
			free(*head);
			*head = NULL;
		}
		else
		{
			h = (**head).next;
			h->prev = NULL;
			free(*head);
			*head = h;
		}
		return (1);
	}
	h = *head;
	while (h)
	{
		if (i == index)
		{
			h->prev->next = h->next;
			h->next->prev = h->prev;
			free(h);
			return (1);
		}
		i++;
		h = h->next;
	}
	return (-1);
}
