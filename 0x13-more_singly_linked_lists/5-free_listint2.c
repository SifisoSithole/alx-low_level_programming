#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - This function frees a linked list
 * @head: head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *h;

	while (*head)
	{
		h = (**head).next;
		free(*head);
		*head = h;
	}
	*head = NULL;
}
