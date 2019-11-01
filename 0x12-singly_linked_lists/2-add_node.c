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
* add_node - adds a new node at the beginning of a list_t list
* @head: address to a list_t head
* @str: string to add the list_t
* Return: the head list_t
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

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
	new->next = *head;

	*head = new;

	return (*head);
}
