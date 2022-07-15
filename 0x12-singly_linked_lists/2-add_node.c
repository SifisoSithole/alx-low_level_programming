#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - This function adds a new node at the beginning of a linked list
 * @head: Address of linked list
 * @str: String to add
 *
 * Return: Appended list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
