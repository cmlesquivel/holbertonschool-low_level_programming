#include "search_algos.h"

/**
 * print_array - print a array
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * Return: nothing
 */

void print_array(int *array, size_t size)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		if (i == 0)
			printf("Searching in array: ");

		printf("%d", array[i]);

		if (i < size - 1)
			printf(", ");
		else
			printf("\n");
	}
}

/**
 * binary_search - searches for a value in an array of
 * integers using the binary search algorithm
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value:is the value to search
 * Return: the index where value is located, another -1
 */

int binary_search(int *array, size_t size, int value)
{
	int init = 0;
	int end = (size - 1);
	int middle = (size - 1) / 2;
	int aux;

	if (array && size > 0)
	{
		print_array(array, size);

		if (value == array[middle])
		{
			return (middle);
		}
		else if (value > array[middle])
		{
			aux = binary_search(array + (middle + 1),
					      size - middle - 1, value);

			if (aux != -1)
				return (aux + middle + 1);
			else
				return (-1);
		}
		else if (value < array[middle])
		{
			return (binary_search(array, middle, value));
		}
	}
	else
		return (-1);
}
