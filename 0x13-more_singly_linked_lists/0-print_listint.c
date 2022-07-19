#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - This function prints all the elements of a listint_t list
 * @h: Address of listint_t
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (1)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
		if (h->next == NULL)
		{
			printf("%d\n", h->n);
			i++;
			break;
		}
	}
	return (i);
}
