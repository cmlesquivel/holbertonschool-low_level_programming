#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list.
* @head: variable type dlistint_t
* @number: int to add to new node
* Return: new node at the begining at the list
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int number)
{
dlistint_t *new_node;

new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
{
return (NULL);
}

new_node->n = number;
new_node->next = *head;
new_node->prev = NULL;

*head = new_node;

return (*head);
}
