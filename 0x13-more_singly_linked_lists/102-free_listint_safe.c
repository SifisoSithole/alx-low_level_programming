#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - print list
 * @h: head node
 *
 * Return: amount of nodes in list
 */
size_t free_listint_safe(listint_t **h)
{
	int len = 0;
	int i;
	listint_t *head;
	const listint_t *adr[1000000];

	if (!h || !*h)
		exit(98);

	while (*h)
	{
		for (i = 0; i < len; i++)
		{
			if (adr[i] == *h)
			{
				free(*h);
				*h = NULL;
				return (len);
			}
		}
		adr[len] = *h;
		len++;
		head = (*h)->next;
		free(*h);
		*h = head;
	}
	return (len);
}
