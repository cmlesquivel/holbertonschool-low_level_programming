#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: address ot the pointer
 * Return: nothing
 */

int pop_listint(listint_t **head)
{
	listint_t *aux;
	int n = 0;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	aux = *head;
	*head = (*head)->next;
	free(aux);

	return (n);
}
