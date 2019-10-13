#include <stdio.h>
#include <stdlib.h>

/**
 *main - print the multiplies two numbers
 * @argc: size the array argv
 * @argv: array that contains the command line arguments
 * Return: 0 is the compile is satisfactory
 */

int main(int argc, char *argv[])
{
	int reply = 0;

	if (argc == 3)
	{
		reply = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", reply);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
