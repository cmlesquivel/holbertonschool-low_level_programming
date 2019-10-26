#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - printf all string the arguments
 * @separator: is the string to be printed between numbers
 * @n: numbers of string to printf
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argumenst;
	unsigned int i;
	char *parameter = NULL;

	va_start(argumenst, n);

	for (i = 0; i < n; i++)
	{
		parameter = va_arg(argumenst, char *);

		if (parameter != NULL)
		{
			printf("%s", parameter);
		}
		else
		{
			printf("%s", "(nil)");
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(argumenst);

}
