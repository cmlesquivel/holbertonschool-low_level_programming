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
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
* @head: variable type dlistint_t
* @index: index of the node to return
* Return: the nth node of a dlistint_t linked list.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *aux;
unsigned int i = 0;
size_t size_list = 0;



if (head == NULL)
{
return (NULL);
}

size_list = get_lenght_list(head);
aux = head;

if (size_list < index)
{
return (NULL);
}

for (i = 0; i < index; i++)
{
aux = aux->next;
}

return (aux);

}
