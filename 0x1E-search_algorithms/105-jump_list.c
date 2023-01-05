#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 *  using the Jump search algorithm
 *  @list: pointer to the head of the list to search in
 *  @size: the number of nodes in list
 *  @value:  value to search for
 *
 *  Return: value to search for
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size), i;
	listint_t *prev, *curr;

	if (!list)
		return (NULL);
	
	curr = list;
	while (curr->n < value && curr->next)
	{
		prev = curr;
		for (i = 0; i < step && curr->next; i++)
			curr = curr->next;
		printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev->index, curr->index);
	while (prev)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
