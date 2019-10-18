#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print the multiplies two positive numbers
 * @argc: size the array argv
 * @argv: array that contains the command line arguments
 * Return: 0 is the compile is satisfactory
 */

int main(int argc, char *argv[])
{
	int i, j;
	int a, b, c;

	if (argc == 3)
	{
		for (i = 0; i < argc; i++)
		{
			for (j = 0; (argv[i])[j] != '\0'; j++)
			{
				if (!(argv[i])[j] >= '0' && (argv[i])[j] <= '9')
				{
					printf("Error\n");
					exit(98);
				}
			}
		}
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = a * b;
		printf("%d\n", c);
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
}
