#include "stdio.h"

/**
* print_to_98 - print a serie of numbers to 98
* @n: the number limit
*
* Return: return the add the two numbers
**/

void print_to_98(int n)
{
	int a;

	if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d\n", a);
		}
	}
	else if (n == 98)
	{
		printf("98\n");
	}
	else
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d\n", a);
		}
	}
}
