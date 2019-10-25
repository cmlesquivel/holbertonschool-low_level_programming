#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - printf all numbers the arguments
 * @separator: is the string to be printed between numbers
 * @n: numbers of number to printf
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argumenst;
	unsigned int i;

	va_start(argumenst, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argumenst, unsigned int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(argumenst);

}
