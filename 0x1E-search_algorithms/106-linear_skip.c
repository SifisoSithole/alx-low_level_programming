#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted list of integers
 *  using the Jump search algorithm
 *  @list: pointer to the head of the list to search in
 *  @value:  value to search for
 *
 *  Return: value to search for
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *curr;

	if (!list)
		return (NULL);
	while (list->express && list->n < value)
	{
		curr = list;
		list = list->express;
		printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
	}
	if (!list->express && list->n < value)
	{
		curr = list;
		while (list->next)
			list = list->next;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
		       curr->index, list->index);
	while (curr)
	{
		printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);
		if (curr->n == value)
			return (curr);
		curr = curr->next;
	}
	return (NULL);
}
