#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
char nameHolberton[20] = "Holberton";
for (i = 0; i < 9; i++)
{
_putchar(nameHolberton[i]);
}
_putchar('\n');
return (0);
}
