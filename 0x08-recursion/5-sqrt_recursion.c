/**
 * sqrt_ - return the natural square root of a number
 * @a: number
 * @b: number candidate to be a square root
 * Return: the natural square root of a number
 * -1 if the number has not natural square
 **/

int sqrt_(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	else
	{
		return (sqrt_(a, b + 1));
	}

}

/**
 * _sqrt_recursion - returns the natural square root the natural of a number
 * @n: number
 * Return: the natural square root of a number
 **/



int _sqrt_recursion(int n)
{
	return (sqrt_(n, 0));
}
