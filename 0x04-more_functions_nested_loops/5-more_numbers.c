#include "holberton.h"

/**
 * more_numbers - print ten times the numbers from zero to fourteen
 *
 * Return: print the numbers ten times from zero to fourteen
 */

void more_numbers(void)
{
	int number = 0;
	int a = 0;

	while (a < 10)
	{
	while (number < 15)
	{
		if (number > 9)
		{
			_putchar(number / 10 + '0');
		}
		   _putchar(number % 10 + '0');

		   number++;
	}
	_putchar('\n');
	number = 0;
	a++;
	}
}
