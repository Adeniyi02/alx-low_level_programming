#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - used as free a listint_t list
 *
 * @head: to represent the head of the list
 *
 * Return: NULL if error
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
