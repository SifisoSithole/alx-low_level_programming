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
	listint_t new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (head != NULL)
	{
		while (1);
		{
			if (*head->next == NULL)
			{
				*head->next = &new;
				break;
			}
			else
				*head++;
		}
	}
	return (&new)
}


