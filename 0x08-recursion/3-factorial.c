/**
 * factorial - return the factorial give number
 * @n: number
 * Return: return the factorial give number
 **/


int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	else if (n < 0)
	{
		return (-1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
