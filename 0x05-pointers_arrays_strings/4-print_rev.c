#include "holberton.h"

/**
* print_rev - print a string in reverse to stdout
* @s: string to print
* Return: void
**/

void print_rev(char *s)
{
	int i = 0;
	int b;

	while (s[i] != '\0')
	{
		i++;
	}

	for (b = i; b >= 0; b--)
	{
		_putchar(s[b]);

	}
	_putchar('\n');

}
