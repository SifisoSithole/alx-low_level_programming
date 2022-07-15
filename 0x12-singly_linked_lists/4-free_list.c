#include <stdlib.h>
#include "lists.h"

/**
 * free_list - This function frees memory of a linked list
 * @head: Address of list to free
 *
 */
void free_list(list_t *head)
{
	list_t *h;

	while (head)
	{
		h = head->next;
		free(head->str);
		free(head);
		head = h;
	}
}
