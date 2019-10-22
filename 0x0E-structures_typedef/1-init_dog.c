#include "dog.h"
#include <stdio.h>

/**
* init_dog - initialize a variable of type struct dog
* @d: struct
* @name: name to set
* @age: age to set
* @owner: owner to set
* Return: array changed
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
