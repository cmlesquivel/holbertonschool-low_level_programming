#include <stdio.h>

/**
 * array_iterator - use a function size times
 * @array: int to print
 * @size: times to print
 * @action: pointer to function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!((array == 0) || (size == 0) || (action == NULL)))
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}
