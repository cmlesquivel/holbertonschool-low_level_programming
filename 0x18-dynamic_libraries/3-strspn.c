#include <stdio.h>
#include "holberton.h"

/**
* _strspn - gets the length of a prefix substring.
* @s: string
* @accept: string accept
* Return: number of the bits in the initial segment
**/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int exist = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		exist = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				exist = 1;
			}

		}

		if (exist == 0)
		{
			break;

		}
	}
	return (i);
}
