#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy a string
 * @str: string to copy
 *
 * Return: a string
 */

char *_strdup(char *str)
{
	char *string;
	int x, i = 0;


	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	string = malloc(sizeof(char) * (i + 1));

	if (string == NULL)
		return (NULL);

	for (x = 0; x < i; x++)
	{
		string[x] = str[x];
	}
	string[x] = '\0';
	return (string);
}
