#include <stdlib.h>
#include "lists.h"
/**
 * find_listint_loop - print list
 * @h: head node
 *
 * Return: amount of nodes in list
 */
listint_t *find_listint_loop(listint_t *h)
{
	int len = 0;
	int i;
	const listint_t *adr[1000000];

	if (h == NULL)
		return (NULL);
	while (h)
	{
		for (i = 0; i < len; i++)
		{
			if (adr[i] == h && adr[i]->n == (*h).n)
				return (h);
		}
		adr[len] = h;
		len++;
		h = h->next;
	}
	return (NULL);
}
