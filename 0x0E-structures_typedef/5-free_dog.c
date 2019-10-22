#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_dog - free structures dogs
* @d: structure to free
* Return: nothing
**/

void free_dog(dog_t *d)
{
	free(d);
}
