#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - This function returns the nth node of a linked list
 * @head: Pointer to the head of the list
 * @index: Index to return
 *
 * Return: Pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
