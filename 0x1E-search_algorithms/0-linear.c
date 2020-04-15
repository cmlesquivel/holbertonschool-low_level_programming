#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value:is the value to search
 * Return: the index where value is located, another -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%li] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
		return (-1);
	}
	return (-1);
}
