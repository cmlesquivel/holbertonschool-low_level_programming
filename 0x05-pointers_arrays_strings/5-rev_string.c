#include "holberton.h"

/**
* rev_string - reverse a string
* @s: string to reverse
* Return: void
**/

void rev_string(char *s)
{
	int i = 0;
	int b, c;
	char aux = '\0';
c = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (b = i - 1; b >= i / 2; b--)
	{

		aux =  s[c];
		s[c] = s[b];
		s[b] = aux;
		c++;
	}
}
