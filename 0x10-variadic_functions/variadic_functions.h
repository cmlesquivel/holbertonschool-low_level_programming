#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct formatos - Struct formatoa
 *
 * @a: format printf
 * @f: The function associated
 */

typedef struct formatos
{
	char *a;
	void (*f)();
} formatos;

#endif
