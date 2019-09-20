#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, x, y, z;
for (i = 48; i < 58; i++)
{
for (x = i; x < 58; x++)
{
for (y = x; y < 58; y++)
{
for (z = y; z < 58; z++)
{
if (!(i == x && z == y && y == x && i == y && x == z && i == z))
{
putchar(i);
putchar(x);
putchar(32);
putchar(y);
putchar(z);
if (i == 56 && x == 57 && y == 57 && z == 57)
{
putchar('\n');
break;
}
putchar(44);
putchar(32);
}
}
}
}
}
return (0);
}
