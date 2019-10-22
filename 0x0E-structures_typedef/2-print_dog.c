#include "dog.h"
#include <stdio.h>

/**
* print_dog - printf the struct dog
* @d: struct to print
* Return: array changed
**/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
