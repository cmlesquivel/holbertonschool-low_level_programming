#include <stdio.h>
#include <stdlib.h>
#include "lists.h"



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

new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
	return (NULL);

new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;

if (*h == NULL)
{
*h = new_node;
}
else
{
for (i = 0; i < idx; i++)
{
	aux = aux->next;
}
(aux->prev)->next = new_node;
new_node->prev = aux->prev;
new_node->next = aux;
aux->prev = new_node;
}
return (*h);
}
