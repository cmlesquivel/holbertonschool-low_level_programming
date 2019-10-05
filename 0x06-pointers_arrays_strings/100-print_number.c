#include "holberton.h"

void print_number(int number_to_printf)
{
unsigned int firstNumber, number;
int n = 0;
int x = 0;
int dividir = 1;
int digito;

if(number_to_printf < 0)
{
firstNumber = -number_to_printf;
number = -number_to_printf;
_putchar('-');
}
else
{
firstNumber = number_to_printf;
number = number_to_printf;
}

while((number / 10) > 0)
{
number = number / 10;
n++;
}

for(x = 0; x < n; x++)
{
dividir = dividir * 10;
}

while((firstNumber / dividir > 0))
{
digito = firstNumber / dividir;
_putchar(digito + '0');
firstNumber = firstNumber - digito * dividir;
if(dividir != 1)
{
dividir = dividir / 10;
}
}
}
