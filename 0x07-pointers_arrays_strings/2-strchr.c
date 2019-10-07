#include <stdio.h>

/**
* _strchr - locate a character in a string
* @s: array
* @c: character to search
* Return: a pointer to the first occurrence of the c character
**/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
