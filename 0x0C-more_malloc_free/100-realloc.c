#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr2: is a pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for pt
 * @new_size:  is the new size, in bytes of the new memory block
 *
 * Return: pointer with reallocates a memory
 */


void *_realloc(void *ptr2, unsigned int old_size, unsigned int new_size)
{
	char *str = NULL;
	char *ptr = ptr2;
	unsigned int i, size = 0;

	if (new_size > old_size)
	{
		size = new_size;
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		str = malloc(new_size);
		return (str);
	}

	str = malloc(size);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < old_size; i++)
	{
		str[i] = ptr[i];
	}

	free(ptr);
	return (str);
}
