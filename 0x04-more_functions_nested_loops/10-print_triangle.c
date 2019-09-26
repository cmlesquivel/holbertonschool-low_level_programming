#include "holberton.h"

/**
 * print_triangle - draws a triangle
 * @n: size of triangle
 *
 * Return: void
 */

void print_triangle(int n)
{

if (n > 0)
{
int a, b, limit;
limit = n;
if (n > 0)
{
while (n > 0)
{
for (a = n - 1; a > 0; a--)
{
_putchar(' ');
}
for (b = n; b <= limit; b++)
{
_putchar('#');
}
_putchar('\n');
n--;
}
}
}
else
{
_putchar('\n');
}
}
