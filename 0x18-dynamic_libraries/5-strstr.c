#include <stdio.h>
#include "holberton.h"

/**
* _strstr - function that locates a substring
* @s: string
* @accept: substring to find
* Return: return a pointer to the byte in s that matches one ot the bytes in
* These functions return a pointer to the beginning of the substring, or NULL
* if the substring is not found
**/


char *_strstr(char *s, char *accept)

{
	int i, j;
	int posicion = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i] && accept[j] != '\0')
			{
				if (posicion == 0)
				{
					posicion = i;
				}
				i++;
				if (accept[j+1] == '\0')
				{
					return (s + posicion);
				}
			}
			else
			{
				posicion = 0;
			}
		}
	}
	return (NULL);
}
