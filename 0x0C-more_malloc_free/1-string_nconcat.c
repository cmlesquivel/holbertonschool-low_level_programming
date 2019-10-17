#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one to copy
 * @s2: string two to copy
 * @n: numbers of characters to copy of s2
 * Return: pointer with s1 and s2
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int size_s1 = 0;
	unsigned int size_s2 = 0;
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size_s1 = strlen(s1);
	size_s2 = strlen(s2);

	str = malloc(sizeof(char) * (size_s1 + size_s2 + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size_s1 + 1; i++)
	{
		str[i] = s1[i];
	}

	if (n > size_s2)
	{
		n = size_s2;
	}

	for (i = 0; i < n; i++)
	{
		str[i + size_s1] = s2[i];
	}
	str[i + size_s1] = '\0';

	return (str);
}
