#include "holberton.h"


/**
 * print_line - return the product of two numbers
 * @n: number of times the character '_' should be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
		_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
