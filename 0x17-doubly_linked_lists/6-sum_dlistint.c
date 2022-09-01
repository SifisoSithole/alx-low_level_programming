#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data of dlistint_t
 * @head: Pointer to the head of dlistint_t
 *
 * Return: The sum of all the data in dlistint
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
