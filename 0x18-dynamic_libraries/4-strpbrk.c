#include <stdio.h>
#include "holberton.h"

/**
* _strpbrk - function locates the first occurence in the string s of any of the
* bytes in the string accept
* @s: string
* @accept: string accept
* Return: return a pointer to the byte in s that matches one ot the bytes in
* accepts o NUll if no matches byte is found
**/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int exist = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		exist = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}

		}

		if (exist == 0)
		{
			s++;
			i = -1;
			j = 0;

		}
	}
	return (NULL);
}
