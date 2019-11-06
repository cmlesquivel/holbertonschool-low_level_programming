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
 * delete_pop - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: address ot the pointer
 * Return: nothing
 */

void delete_pop(listint_t **head)
{
	listint_t *aux;

	if (head == NULL || *head == NULL)
		return;

	aux = *head;
	*head = (*head)->next;
	free(aux);
}

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list.
 * @head: address of the pointer
 * @index:is the index of the node, starting at 0
 * Return: 1 if it succeeded, -1 if it failed
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux = NULL, *aux2 = NULL;
	unsigned int i = 1;
	size_t length_list = 0;

	length_list = listint_len(*head) - 1;

	aux = *head;

	while (i < index)
	{
		aux = aux->next;
		i++;
	}

	if (index == 0)
	{
		delete_pop(head);
		head = NULL;
	}

	else if (index == length_list)
	{
		free(aux->next);
		aux->next = NULL;
	}
	else
	{
		aux2 = aux->next->next;
		free(aux->next);
		aux->next = aux2;
	}
	return (1);
}
