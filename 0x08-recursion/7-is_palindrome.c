/**
 * _strlen_recursion - return length of string
 * @s: string to count
 * Return: lenght of string
 **/


int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (sizeof(*s) + _strlen_recursion(s + 1));
	}

	return (0);
}


/**
 * compare_palindrome - return if a string is a palindrome
 * @s: string
 * @l: lenght of the string
 * Return: 1 if a string is a palindrome and 0 if not
 **/

int compare_palindrome(char *s, int l)
{
	if (l <= 0)
	{
		return (1);
	}
	if (*s == *(s + l - 1))
	{
		return (compare_palindrome(s + 1, l - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - returns if a string is a palindrome
 * @s: string to check
 * Return: 1 if a string is a palindrome and 0 if not
 **/



int is_palindrome(char *s)
{
	int lengtstring = _strlen_recursion(s);

	return (compare_palindrome(s, lengtstring));
}
