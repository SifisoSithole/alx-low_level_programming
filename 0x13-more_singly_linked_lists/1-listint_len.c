#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - This function returns the number of nodes in a linked list
 * @h: Head of the list
 *
 * Return: Number of nodes in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (1)
	{
		if (h->next == NULL)
		{
			len++;
			break;
		}
		else
		{
			h = h->next;
			len++;
		}
	}
	return (len);
}
