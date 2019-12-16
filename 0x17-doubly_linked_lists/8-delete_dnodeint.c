#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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
* delete_dnodeint_at_index - deletes the node at index of list.
* @h: variable type dlistint_t
* @idx: index of the node to remove
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **h, unsigned int idx)
{
dlistint_t *aux;
unsigned int i;
size_t size_list = 0;

if (h == NULL || *h == NULL)
return (-1);
size_list = get_lenght_list(*h);
aux = *h;
if (idx == 0  && size_list == 1)
{
free(*h);
*h = NULL;
return (1);
}
if (size_list < idx)
return (-1);
aux = *h;
if (idx == 0)
{
free(*h);
*h = aux->next;
(aux->next)->prev = NULL;
return (1);
}
if (idx == size_list)
{
while (aux->next != NULL)
{
aux = aux->next;
}
(aux->prev)->next = NULL;
free(aux);
return (1);
}
for (i = 0; i < idx; i++)
aux = aux->next;
(aux->prev)->next = aux->next;
(aux->next)->prev = aux->prev;
free(aux);
return (1);
}