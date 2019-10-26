#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * printf_char - print the argument type char
 *
 * @n_char: the argument
 * Return: nothing
 */

void printf_char(va_list n_char)
{
	printf("%c", va_arg(n_char, int));
}

/**
 * printf_integer - print the argument type integer
 *
 * @integer: the argument
 * Return: nothing
 */

void printf_integer(va_list integer)
{
	printf("%d", va_arg(integer, int));
}

/**
 * printf_float - print the argument type float
 *
 * @float_arg: the argument
 * Return: nothing
 */

void printf_float(va_list float_arg)
{
	printf("%f", va_arg(float_arg, double));
}

/**
 * printf_string - print the argument type string
 *
 * @string_arg: the argument
 * Return: nothing
 */

void printf_string(va_list string_arg)
{
	char *array_arg = va_arg(string_arg, char*);

	if (array_arg != NULL)
	{
		printf("%s", array_arg);
	}
}

/**
 * print_all - print all the arguments
 *
 * @format: the arguments
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list arguments;

	formatos array_formats[] = {
			{"c", printf_char},
			{"i", printf_integer},
			{"f", printf_float},
			{"s", printf_string},
			{NULL, NULL}
		};

	va_start(arguments, format);

	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (array_formats[j].a != NULL)
		{
			if (*(array_formats[j].a) == format[i])
			{
				(array_formats[j].f)(arguments);
				if (format[i + 1] != '\0')
				{
					printf(", ");
				}
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arguments);
}
