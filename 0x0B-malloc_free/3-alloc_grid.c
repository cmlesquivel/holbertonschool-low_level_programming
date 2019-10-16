#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  create a pointer to a 2 dimensional array of integers
 * @columns: numbers of columns
 * @rows: number of rows
 *
 * Return: a pointer to a 2 dimensional
 */

int **alloc_grid(int columns, int rows)
{
	int i, j;
	int **array;

	if (columns <= 0)
		return (NULL);

	if (rows <= 0)
		return (NULL);

	array = malloc(rows * sizeof(int *));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < rows; i++)
	{
		array[i] = malloc(columns * sizeof(int));
		if (array[i] == NULL)
			return (NULL);
	}

	for (i = 0; i <  rows; i++)
		for (j = 0; j < columns; j++)
			array[i][j] = 0;
	return (array);

}
