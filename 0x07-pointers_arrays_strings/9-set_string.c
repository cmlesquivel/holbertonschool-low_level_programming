#include "holberton.h"
#include <stdio.h>

/**
* set_string - set the value the pointer to a char
* @s: pointer
* @to: char
* Return: void
**/


void set_string(char **s, char *to)
{
	*s = to;
}
