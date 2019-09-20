#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, x;
for (i = 48; i < 58; i++)
{
for (x = 48; x < 58; x++)
{
putchar(i);
putchar(x);
if (i == 57 && x == 57)
{
putchar('\n');
break;
}
putchar(44);
putchar(32);
}
}
return (0);
}
