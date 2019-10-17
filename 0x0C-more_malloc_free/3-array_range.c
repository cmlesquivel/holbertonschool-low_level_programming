#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers from integer min to intger max
 * @min: integer min
 * @max: integer max
 *
 * Return: pointer to the newly array
 */


int *array_range(int min, int max)
{
	int *str = NULL;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = ((max - min) + 1);

	str = malloc(sizeof(int) * size);

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = min;
		min++;
	}
	return (str);
}
