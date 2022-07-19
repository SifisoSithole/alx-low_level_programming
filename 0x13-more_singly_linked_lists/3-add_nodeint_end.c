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

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	h = *head;
	if (head != NULL)
	{
		while (1)
		{
			if (h->next == NULL)
			{
				h->next = new;
				break;
			}
			else
				h = h->next;
		}
	}
	return (new);
}


