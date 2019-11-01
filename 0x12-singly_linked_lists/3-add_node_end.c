#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
* _strlen - return the lenght of string
* @s: string to count the length
* Return: the lenght of string
**/

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}


/**
* add_node_end - adds a new node at the end of a list_t list
* @head: address to a list_t head
* @str: string to add the list_t
* Return: the address of the new element, or NULL if it failed
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *pointer;


	if (head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	pointer = *head;

	while (pointer->next != NULL)
	{
		pointer = pointer->next;
	}

	pointer->next = new;

	return (new);
}
