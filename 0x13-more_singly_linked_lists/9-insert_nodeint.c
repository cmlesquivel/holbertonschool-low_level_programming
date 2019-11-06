#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: element type listing_t
 * Return: the number of nodes
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: address ot the pointer
 * @n: number to add in the new list
 * Return: a element type listint_t
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}

/**
 * insert_nodeint_at_index -function that insert a new node at a given position
 * @head: address ot the pointer
 * @index:is the index of the node to insert, starting at 0
 * @n: number to insert
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *aux = NULL, *new = NULL;
	unsigned int i = 1;
	size_t length_list = listint_len(*head);

	if (index > length_list || *head == NULL)
	{
		return (NULL);
	}

	aux = *head;

	if (index == 0)
	{
		return (add_nodeint(head, n));
	}

	while (i < index)
	{
		aux = aux->next;
		i++;
	}

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = aux->next;

	aux->next = new;

	return (aux->next);
}
