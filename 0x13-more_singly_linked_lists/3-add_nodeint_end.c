#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: address ot the pointer
 * @n: number to add in the new list
 * Return: a element type listint_t
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	aux = *head;

	while (aux->next != NULL)
	{
		aux = aux->next;
	}

	aux->next = new;

	return (new);
}
