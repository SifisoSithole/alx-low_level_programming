#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data of a linked list
 * @head: Pointer to the linked list
 *
 * Return: Sum of all the data in the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
