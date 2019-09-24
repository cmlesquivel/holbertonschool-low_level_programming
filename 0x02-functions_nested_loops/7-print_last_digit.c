#include "holberton.h"

/**
* print_last_digit - printer the last number
* @c: the number to check
* Return: return the last number
**/

int print_last_digit(int c)
{
int numberAbsolt, lastNumber;

lastNumber = c % 10;


if (lastNumber > 0)
{
numberAbsolt = lastNumber;
}
else
{
numberAbsolt = -lastNumber;
}

_putchar(numberAbsolt + '0');
return (numberAbsolt);
}
