#include "holberton.h"

/**
 * _puts_recursion - print a string
 * @s: string to print
 * Return : void
 **/


void _puts_recursion(char *s)
{
	_putchar(s[0]);

	if (s[1] != '\0')
	{
		_puts_recursion(s + 1);
	}
}
