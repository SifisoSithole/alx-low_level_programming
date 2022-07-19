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
	unsigned int i = 0;

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

/**
 * delete_nodeint_at_index - This function deletes node at index
 * @head: Pointer to the head
 * @index: The index of the node to delete
 *
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *del;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		del = (**head).next;
		free(*head);
		*head = del;
		return (1);
	}

	prev = get_nodeint_at_index(*head, index - 1);
	del = get_nodeint_at_index(*head, index);
	if (!prev || !del)
		return (-1);
	prev->next = del->next;
	free(del);
	return (1);
}
