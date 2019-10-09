#include "holberton.h"

/**
 * _strlen_recursion - return length of string
 * @s: string to count
 * Return: lenght of string
 **/


int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (sizeof(*s) + _strlen_recursion(s + 1));
	}
}
