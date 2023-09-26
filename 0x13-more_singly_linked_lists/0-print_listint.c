#include "lists.h"
#include <stdio.h>

/**
 * print_listint - to prints all the elements of a listint_t list.
 *
 * @h: for head of the linklist node
 *
 * Return: to represent the number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
