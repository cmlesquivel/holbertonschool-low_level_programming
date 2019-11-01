#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>


/**
* free_list - function that frees a list_t list.
* @head: address to a list_t head
* Return: nothing
 **/

void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head->str);
		free_list(head->next);
	}

	free(head);
}
