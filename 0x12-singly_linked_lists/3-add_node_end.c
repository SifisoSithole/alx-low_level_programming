#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - This function adds a node at the end
 * @head: Address of linked list
 * @str: String to add
 *
 * Return: Address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *h;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	h = *head;
	if (*head == NULL)
		*head = new;
	else
	{
		while (h->next)
			h = h->next;
		h->next = new;
	}
	return (new);
}
