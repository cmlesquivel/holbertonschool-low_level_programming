#include <stdio.h>

/**
* print_diagsums -prints the sum of the two diagonals of a square matrix
* of integers
* @a: array of int
* @size: size of the array
* Return : void
**/


void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;
	int matrix = size * size;

	for (i = 0; i < matrix ; i = i + 1 + size)
	{
		sum1 = sum1 + a[i];
	}

	for (i = size - 1; i < matrix - 1; i = i + size - 1)
	{
		sum2 = sum2 + a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
