#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, x, y;
for (i = 48; i < 58; i++)
{
for (x = i + 1; x < 58; x++)
{
for (y = x + 1; y < 58; y++)
{
putchar(i);
putchar(x);
putchar(y);
if (i == 55 && x == 56 && y == 57)
{
putchar('\n');
break;
}
putchar(44);
putchar(32);
}
}
}
return (0);
}

