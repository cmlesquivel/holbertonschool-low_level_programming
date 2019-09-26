#include "holberton.h"

/**
 * _isupper - return is the charaacter is mayus
 * @n: chararter to check
 * Return: 1 if the character is upper
 */

int _isupper(int n)
{
	if (n > 64 && n < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
