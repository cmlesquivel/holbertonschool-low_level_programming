#include "holberton.h"


/**
 * print_numbers - print the numbers from one to nine
 *
 * Return: the product of two numbers
 */

void print_numbers(void)
{
	int number = 1;

	while (number < 10)
	{
		_putchar(number + '0');
		number++;
	}
	_putchar('\n');
}
