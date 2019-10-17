#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - that allocates memory using malloc
 * @b: amount of space to reserved
 * Return: nothing
 */



void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);

	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
