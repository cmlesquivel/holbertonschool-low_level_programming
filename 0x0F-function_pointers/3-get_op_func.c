#include "3-calc.h"
#include <stdio.h>


/**
 * get_op_func - function associated
 * @s:y operator
 * Return: the answer
 */

int (*get_op_func(char *s))(int a, int b)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
