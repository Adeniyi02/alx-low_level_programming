#include "lists.h"

/**
 * sum_listint - used to calculate the sum of all the data (n) of a listint_t linked list.
 * @head: to represent pointer to the first node
 *
 * Return: sum all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
