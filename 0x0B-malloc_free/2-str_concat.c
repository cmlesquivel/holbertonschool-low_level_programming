#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings
 * @s1: string one to copy
 * @s2: string two to copy
 *
 * Return: a string with the two string
 */


char *str_concat(char *s1, char *s2)
{
	char *string;
	int a = 0;
	int b = 0;
	int x;


	if (s1 != NULL)
	{
		while (s1[a] != '\0')
		{
			a++;
		}
	}

	if (s2 != NULL)
	{
		while (s2[b] != '\0')
		{
			b++;
		}
	}

	string = malloc(sizeof(char) * (a + b + 1));

	if (string == NULL)
		return (NULL);

	for (x = 0; x < a; x++)
	{
		string[x] = s1[x];
	}

	for (x = 0; x < b; x++)
	{
		string[x + a] = s2[x];
	}
	string[x + a] = '\0';
	return (string);
}
