#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 * @a:number;
 * Return: Always 0.
 */

void print_binary(unsigned long int a)
{
	unsigned long int n = 0, b = 0;
	unsigned long int acumulado = 0;
	int aux = 0;

	if (a == 0)
	{
		_putchar('0');
		return;
	}

	while ((1 << n) <= a)
		n++;

	_putchar('1');
	b = n - 1;
	acumulado = 1 << b;
	b--;

	while (acumulado != a)
	{
		aux = 1 << b;

		if ((acumulado + aux) > a)
			_putchar('0');
		else if ((acumulado + aux) == a)
		{
			_putchar('1');
			_putchar('0');
			acumulado = acumulado + aux;
		}
		else
		{
			_putchar('1');
			acumulado = acumulado + aux;
			}
		b--;
	}
}
