#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific
 * char
 * @c: char with initializes the array
 * @size: the size of the array
 *
 * Return: the array
 */

char *create_array(unsigned int size, char c)
{
	char *str_;
	unsigned int i;


	if (size == 0)
	{
		return (NULL);
	}
	str_ = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		str_[i] = c;
	}
	return (str_);
}
