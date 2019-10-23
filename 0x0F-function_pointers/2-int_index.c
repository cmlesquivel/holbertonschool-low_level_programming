#include <stdio.h>

/**
 * int_index - function that searches for an integer.
 * @array: int to search
 * @size: is the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!((array == 0) || (size <= 0) || (cmp == NULL)))
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(*(array + i)) != 0)
			{
				return (i);
			}
		}
		return (-1);
	}
	else
	{
		return (-1);
	}
}
