#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - This function adds node 
 * Return: pointer to node
 * @head: head node
 * @n: new node data
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (0);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
