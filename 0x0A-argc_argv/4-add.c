#include <stdio.h>

/**
 *main - print the add positive numbers
 * @argc: size the array argv
 * @argv: array that contains the command line arguments
 * Return: 0 is the compile is satisfactory
 */

int main(int argc, char *argv[])
{
	int i;
	int reply = 0;

	for (i = 1; i < argc; i++)
	{
		if (*(argv[i]) >= '0' && *(argv[i]) <= '9')
		{
			reply += atoi(argv[i]);
		}
		else
		{
			printf("escribiendo %s", argv[i]);
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", reply);
	return (0);
}
