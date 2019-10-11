#include "holberton.h"


/**
 * _isdigit - return is the character is number
 * @n: chararter to check
 * Return: 1 if the character is number
 */

int _isdigit(int n)
{
	if (n > 47 && n < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
