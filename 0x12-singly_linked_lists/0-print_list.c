#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>

/**
* print_list - printf all elements of a list_t
* @h: variable type list_t
* Return: the number of nodes
 **/

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		n++;
	}

	return (n);
}
