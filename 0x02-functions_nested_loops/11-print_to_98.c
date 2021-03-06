#include "holberton.h"
#include <stdio.h>
void print_positive(int n);
void print_negative(int n);

/**
* print_to_98 - print a serie of numbers to 98
* @n: the number limit
*
* Return: void
**/

void print_to_98(int n)
{
if (n > 98)
{
print_positive(n);
}
else if (n == 98)
{
printf("98\n");
}
else
{
print_negative(n);
}
}

/**
* print_positive - print a serie of numbers to 98
* @n: the number limit
*
* Return: void
**/

void print_positive(int n)
{

int a, b, c, d, e;

for (a = n; a >= 98; a--)
{
if (a > 99)
{
b = a / 100;
c = a % 100;
d = c / 10;
e = c % 10;
_putchar(b + '0');
_putchar(d + '0');
_putchar(e + '0');
}

else
{
b = a / 10;
c = a % 10;
_putchar(b + '0');
_putchar(c + '0');
}
if (a != 98)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar('\n');
}
}
}

/**
* print_negative - print a serie of numbers to 98
* @n: the number limit
*
* Return: void
**/

void print_negative(int n)
{
int a, b, c, d, e;

for (a = n; a <= 98; a++)
{
if (a < 0)
{
if (a < -99)
{
b = -a / 100;
c = a % 100;
d = -c / 10;
e = -c % 10;
_putchar('-');
_putchar(b + '0');
_putchar(d + '0');
_putchar(e + '0');
}
else
{
b = -a / 10;
c = -a % 10;
if (a < -9)
{
_putchar('-');
_putchar(b + '0');
_putchar(c + '0');
}
else
{
_putchar('-');
_putchar(c + '0');
}
}
}
else
{
b = a / 10;
c = a  % 10;
if (a > 9)
{
_putchar(b + '0');
_putchar(c + '0');
}
else
{
_putchar(c + '0');
}
}
if (a != 98)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar('\n');
}
}
}
