#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - This function prints elements of a linked list
 * @h: Address of the linked list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		num++;
		h = h->next;
	}

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	num++;
	return (num);
}
