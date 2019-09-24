#include "holberton.h"

/**
* times_table - printer nine times the table
*
* Return: printer nine times the table
**/

void times_table(void)
{
int i, x, n, answer;
for (n = 0; n < 9; n++)
{
for (i = 0; i < 10; i++)
{
for (x = 0; x < 10; x++)
{
answer = i * x;
if (answer > 9)
{
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
_putchar((i * x) + '0');
}
if (x != 9)
{
_putchar(44);
_putchar(32);
}
}
_putchar('\n');
}
}
}
