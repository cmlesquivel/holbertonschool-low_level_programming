#include "holberton.h"

/**
* puts_half - print half of a string
* @s: string to print
* Return: void
**/

void puts_half(char *s)
{
	int lengt = 0;
	int star, i;

	while (s[lengt] != '\0')
	{
		lengt++;
	}

	if ((lengt % 2) == 0)
	{
		star = lengt / 2;
	}
	else
	{
		star = (lengt - 1) / 2;
	}
	for (i = star; i < lengt; i++)
	{
		_putchar(s[i]);

	}
	_putchar('\n');

}
