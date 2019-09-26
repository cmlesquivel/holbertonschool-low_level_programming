#include "holberton.h"


/**
 * print_diagonal - draws a diagonal line
 * @n: number of times to draws a diagonal line
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= a; b++)
			{
				_putchar(' ');
			}
		_putchar(92);
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
