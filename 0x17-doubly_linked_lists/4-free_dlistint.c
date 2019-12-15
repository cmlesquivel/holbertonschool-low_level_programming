#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* free_dlistint - function that free a dlistint_t list.
* @head: pointer to head of list
*/

void free_dlistint(dlistint_t *head)
{
if (head == NULL)
{
return;
}
while (head->next != NULL)
{
head = head->next;
free(head->prev);
head->prev = NULL;
}

free(head);
}
