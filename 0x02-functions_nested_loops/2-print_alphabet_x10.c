#include "holberton.h"

/**
*print_alphabetx10 - print the alphabet ten times
*
* Return: nothing
*
**/

void print_alphabetx10(void)
{
int a, b;
for (b = 0; b < 10; b++)
{
for (a = 97; a < 123; a++)
{
_putchar(a);

}
_putchar('\n');
}
}
