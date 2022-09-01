#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a node at the end of a dlistint_t list
 * @head: Pointer to the dlistint
 * @n: Integer to add
 *
 * Return: Pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h = *head;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = NULL;
	if (!head || !*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		h = *head;
		while (h->next)
			h = h->next;
		h->next = new;
		new->prev = h;
	}
	return (new);
}
