#include "holberton.h"

/**
* print_last_digit - printer the last number
* @c: the number to check
* Return: return the last number
**/

int print_last_digit(int c)
{
int numberAbsolt, lastNumber;
if (c > 0)
{
numberAbsolt = c;
}
else
{
numberAbsolt = -c;
}
lastNumber = numberAbsolt % 10;
_putchar(lastNumber + '0');
return (lastNumber);
}
