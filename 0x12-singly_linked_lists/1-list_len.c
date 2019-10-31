#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>

/**
* list_len - count all elements of a list_t
* @h: variable type list_t
* Return: the number of nodes
 **/

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
