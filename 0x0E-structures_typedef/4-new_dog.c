#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strlen - return the lenght of string
* @s: string to count the length
* Return: the lenght of string
**/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
* _strcpy - copy the string src to string dest
* @src: string source
* @dest: string dest
* Return: the string dest
**/

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}

/**
* new_dog - create a new dog
* @name: name to set
* @age: age to set
* @owner: owner to set
* Return: a struct dog_t
**/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *n_name;
	char *n_owner;

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		return (NULL);
	}
	n_name = malloc(_strlen(name) + 1);

	if (n_name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->name = _strcpy(n_name, name);

	n_owner = malloc(_strlen(owner) + 1);
	if (n_owner == NULL)
	{
		free(n_name);
		return (NULL);
	}
	my_dog->owner = _strcpy(n_owner, owner);

	my_dog->age = age;

	return (my_dog);
}
