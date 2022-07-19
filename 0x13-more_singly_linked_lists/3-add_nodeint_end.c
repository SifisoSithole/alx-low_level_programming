#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - This function adds a new node at the end of a linked list
 * @head: Head of the list
 * @n: Integer to add
 *
 * Return: Return address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *h;


	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	h = *head;
	if (!h)
	{
		*head = new;
		return (new);
	}
	while (h->next)
		h = h->next;
	h->next = new;
	return (new);
}


