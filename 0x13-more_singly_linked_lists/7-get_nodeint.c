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
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: address ot the pointer
 * @index:is the index of the node, starting at 0
 * Return: the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux = NULL;
	unsigned int i = 0;
	size_t length_list = listint_len(head) - 1;

	if (index > length_list)
	{
		return (NULL);
	}

	aux = head;

	while (i < index)
	{
		aux = aux->next;
		i++;
	}

	return (aux);
}
