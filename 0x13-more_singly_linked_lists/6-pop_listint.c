#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - This function deletes the head of the node
 * @head: Address of the head node
 *
 * Returns: the head nodes data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *h;

	if (head == NULL)
		return (0);
	n = *head->n;
	h = *head->next;
	free(*head);
	*head = h->next;
	return (n);
}
