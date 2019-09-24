#include "holberton.h"

/**
* print_sign - checks if the number is positive, zero o negative
* @c:the number to check
* Return: On success 1 is the number is positive,zero o negative
**/

int print_sign(int c)
{
if (c > 0)
{
_putchar('+');
return (1);
}
else if (c < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
