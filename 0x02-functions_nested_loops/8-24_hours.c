#include "holberton.h"

/**
* jack_bauer - printer the time of the day
*
* Return: printer the time of the day
**/

void jack_bauer(void)
{
int a, b;
for (a = 0; a < 24; a++)
{
for (b = 0; b < 60; b++)
{
_putchar(a / 10 + '0');
_putchar(a % 10 + '0');
_putchar(58);
_putchar(b / 10 + '0');
_putchar(b % 10 + '0');
_putchar('\n');
}
}
}
