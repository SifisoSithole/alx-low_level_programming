#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - print list
 * @head: head node
 *
 * Return: amount of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	int len = 0;
	int i;
	listint_t *adr[100000];

	if (!head)
		exit(98);

	while (head)
	{
		for (i = 0; i < len; i++)
		{
			if (adr[i] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (len);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		adr[len] = head;
		len++;
		head = head->next;
	}
	return (len);
}
