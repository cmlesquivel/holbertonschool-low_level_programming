#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code for Holberton School students.
 * @argc: size the array argv
 * @argv: array that contains the command line arguments
 * Return: Always 0.
 */


int main(int argc, char *argv[])
{
	int num1, num2, answer;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!((argv[2][0] == '+') || (argv[2][0] == '-')
	      || (argv[2][0] == '*') || (argv[2][0] == '/')
	      || (argv[2][0] == '%')) || !(strlen(argv[2]) == 1))
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' && argv[3][0] == '0') || (argv[2][0] == '%'
							 && argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = (argv[2]);

	answer = (get_op_func(operator))(num1, num2);


	printf("%d\n", answer);
	return (0);
}
