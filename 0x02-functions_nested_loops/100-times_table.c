#include "holberton.h"

/**
* print_times_table - printer times  table
* @n: times to printer table
* Return: printer times table
**/

void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int i, x, answer;
for (i = 0; i <= n; i++)
{
for (x = 0; x <= n; x++)
{
answer = i * x;
if (answer > 99)
{
_putchar(answer / 100 + '0');
_putchar((answer % 100) / 10 + '0');
_putchar(answer % 10 + '0');
}
else if (answer > 9)
{
_putchar(32);
_putchar(answer / 10 + '0');
_putchar(answer % 10 + '0');
}
else if (x == 0)
{
_putchar('0');
}
else
{
_putchar(32);
_putchar(32);
_putchar((i * x) + '0');
}
if (x != n)
{
_putchar(44);
_putchar(32);
}
}
_putchar('\n');
}
}
}
