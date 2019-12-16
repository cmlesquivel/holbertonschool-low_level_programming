#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* sum_dlistint - sum of all the data (n) of a dlistint_t linked list
* @head: pointer to head of list
* Return: sum of all the data (n) of a dlistint_t linked list
*/

int sum_dlistint(dlistint_t *head)
{
const dlistint_t *aux;
int sum_n = 0;
aux = head;

while (aux != NULL)
{
sum_n = sum_n + aux->n;
aux = aux->next;
}

return (sum_n);
}
