#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - add all the arguments
 * @n: count of remaining arguments
 *
 * Return: the add all the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argumenst;
	unsigned int add = 0, i;

	va_start(argumenst, n);

	for (i = 0; i < n; i++)
	{
		add += va_arg(argumenst, unsigned int);
	}
	va_end(argumenst);

	return (add);
}
