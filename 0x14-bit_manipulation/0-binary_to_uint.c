#include <stdio.h>

/**
 * _strlen_recursion - return length of string
 * @s: string to count
 * Return: lenght of string
 **/


int _strlen_recursion(const char *s)
{
	if (*s != '\0')
	{
		return (sizeof(*s) + _strlen_recursion(s + 1));
	}

	return (0);

}

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int;
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1 b is
 */


unsigned int binary_to_uint(const char *b)
{
	int length = _strlen_recursion(b), i;
	unsigned int my_number = 0;
	unsigned int multiple = 1;

	if (b == '\0')
	{
		return (0);
	}

	for (i = (length - 1); i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			my_number = my_number + ((b[i] - '0') * multiple);
			multiple = multiple * 2;
		}
		else
		{
			return (0);
		}
	}

	return (my_number);
}
