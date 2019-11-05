#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * free_listint2 - adds a new node at the end of a listint_t list
 * @head: address ot the pointer
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
		return;

	aux = *head;

	while (*head != NULL)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}
}
