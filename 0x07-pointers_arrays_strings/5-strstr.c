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
	int match = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (posicion == 0)
				{
				posicion = j;
				}
				break;
			}

			if (posicion != 0 && accept[i] != s[j])
			{
				return (s + posicion);
			}

		}
	}
		return (NULL);
}
