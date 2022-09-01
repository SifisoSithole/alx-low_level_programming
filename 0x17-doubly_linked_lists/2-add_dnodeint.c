#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Adds node at the beginning of a linked list
 * @head: Pointer to the head of the linked list
 * @n: Integer to insert
 *
 * Return: Pointer to the new head of the linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (!head || !*head)
		new->next = NULL;
	else
	{
		(**head).prev = new;
		new->next = *head;
	}
	*head = new;
	return (new);
}
