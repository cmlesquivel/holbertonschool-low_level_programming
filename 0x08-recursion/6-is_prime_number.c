/**
 * prime_ - return if a number is a prime number
 * @a: number
 * @b: number candidate to  check
 * Return: 1 if the number is prime
 * 0 if the number is not prime
 **/

int prime_(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	else if (a < 2)
	{
		return (0);
	}
	else
	{
		return (prime_(a, b + 1));
	}

}

/**
 * is_prime_number - returns if a number is a primer number
 * @n: number
 * Return: 1 if the number is prime
 * 0 if the number is not prime
 **/



int is_prime_number(int n)
{
	return (prime_(n, 2));
}
