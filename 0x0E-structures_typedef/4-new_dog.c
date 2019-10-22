#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		return (NULL);
	}
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);
}
