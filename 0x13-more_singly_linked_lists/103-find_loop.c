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
	int i;
	const listint_t *adr[1000000];

	if (h == NULL)
		return (NULL);
	while (h)
	{
		i = 0;
		while (adr[i])
		{
			if (adr[i] == h && adr[i]->n == (*h).n)
				return (h);
			i++;
		}
		adr[i] = h;
		h = h->next;
	}
	return (NULL);
}
