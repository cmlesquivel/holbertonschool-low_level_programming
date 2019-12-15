#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list.
* @head: variable type dlistint_t
* @number: int to add to new node
* Return: the head of the list type dlistint_t
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int number)
{
dlistint_t *new_node, *aux;

new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
{
return (NULL);
}

new_node->n = number;
new_node->next = NULL;
new_node->prev = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{

aux = malloc(sizeof(dlistint_t));
if (aux == NULL)
{
return (NULL);
}

aux = *head;

while (aux->next != NULL)
{
aux = aux->next;
}

aux->next = new_node;
new_node->prev = aux;

}
return (*head);
}
