#include "holberton.h"


/**
 * print_most_numbers - print the numbers from one to nine, less two and four
 *
 * Return: print the numbers from one to nine, less two and four
 */

void print_most_numbers(void)
{
	int number = 0;

	while (number < 10)
	{
		if (number != 2 && number != 4)
		{
			_putchar(number + '0');
		}
		number++;
	}
	_putchar('\n');
}
