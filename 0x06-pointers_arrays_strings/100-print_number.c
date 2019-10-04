#include "holberton.h"

/**
 * print_number - print a number int
 * @number:number to print
 * Return: 0
 **/

void print_number(int number)
{
int divisor = 10;
int residuo;
int n = 1;
int digito;
if (number < 0)
{
number = -number;
_putchar('-');
}
residuo = number % divisor;
while ((number - residuo) != 0)
{
divisor = divisor * 10;
residuo = number % divisor;
n++;
}
while (n > 0)
{
divisor = divisor / 10;
digito = number / divisor;
number = number - (digito *divisor);
_putchar(digito + '0');
n--;
}
}
