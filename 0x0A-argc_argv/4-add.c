#include <stdio.h>
#include <stdlib.h>

/**
 *main - print the add positive numbers
 * @argc: size the array argv
 * @argv: array that contains the command line arguments
 * Return: 0 is the compile is satisfactory
 */

int main(int argc, char *argv[])
{
	int i, x;
	int reply = 0;

	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x] != '\0'; x++)
		{
		if ((argv[i])[x] >= '0' && (argv[i])[x] <= '9')
		{
			if (x == 0)
			{
				reply += atoi(argv[i]);
			}
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		}
	}
	printf("%d\n", reply);
	return (0);
}
