#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: element type listint_t
 * Return:  the sum of all the data (n) of a listint_t linked list
 *
 */


int sum_listint(listint_t *head)
{
	int n = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		n = n + head->n;
		head = head->next;
	}
	return (n);
}
