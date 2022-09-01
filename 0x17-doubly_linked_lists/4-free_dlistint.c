#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t
 * @head: Pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;

	while (head)
	{
		h = head->next;
		free(head);
		head = h;
	}
}
