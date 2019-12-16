#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"



/**
* add_node_init - adds a new node at the beginning of a dlistint_t list.
* @head: variable type dlistint_t
* @number: int to add to new node
* Return: new node at the begining at the list
*/

dlistint_t *add_node_init(dlistint_t **head, const int number)
{
dlistint_t *new_node;

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
new_node->next = *head;
(*head)->prev = new_node;
*head = new_node;
}
return (*head);
}



/**
* get_lenght_list - returns the number of elements in a linked list
* @h: variable type dlistint_t
* Return: the number of the nodes
*/

size_t get_lenght_list(const dlistint_t *h)
{
const dlistint_t *aux;
size_t my_counter = 0;

aux = h;

while (aux != NULL)
{
my_counter++;
aux = aux->next;
}

return (my_counter);
}

/**
* insert_dnodeint_at_index - add new node in the index position at linked list.
* @h: variable type dlistint_t
* @idx: index of the node to add
* @n: integer to add in the new node
* Return: the head node of a dlistint_t linked list.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *aux, *new_node;
unsigned int i;
size_t size_list = 0;

if (h == NULL)
return (NULL);

size_list = get_lenght_list(*h);
aux = *h;

if (size_list < idx)
return (NULL);
if (idx == 0)
{
add_node_init(h, n);
return (*h);
}
if (idx == size_list)
{
add_dnodeint_end(h, n);
return (*h);
}
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;
if (*h == NULL)
*h = new_node;
else
{
for (i = 0; i < idx; i++)
aux = aux->next;
(aux->prev)->next = new_node;
new_node->prev = aux->prev;
new_node->next = aux;
aux->prev = new_node;
}
return (*h);
}
