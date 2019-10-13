#include <stdio.h>

/**
 *main - print the name of the file
 * @argc: size the array argv
 * @argv: array that contains the command line arguments
 * Return: 0 is the compile is satisfactory
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
