#include <stdio.h>

/**
* print_array - print n elements of the array to print
* @a: array to print
* @n: numbers of elements of the array to print
* Return: void
**/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
	
}
