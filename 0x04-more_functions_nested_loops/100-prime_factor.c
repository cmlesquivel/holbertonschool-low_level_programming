#include "holberton.h"
#include <stdio.h>

/**
* main - prints the largest prime factor of the number 612852475143,
*
* Return:prints the largest prime factor of the number 612852475143
*/

int main(void)
{

long number = 612852475143;
long larges_prime = 2;
long a;
long reply = number;

for (a = 2; a <= number; a++)
{
if (reply % a == 0)
{
reply = reply / a;
if (larges_prime < a)
{
larges_prime = a;
}
}
}

printf("%li", larges_prime);
printf("\n");

																											}
}