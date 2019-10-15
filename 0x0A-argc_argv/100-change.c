#include <stdio.h>
#include <stdlib.h>

/**
 * change - the minimum number of coins to make change for an amount of money.
 * @cents: amount of money
 * Return: void
 */

void change(int cents)
{
	int values [] = {1, 2, 5, 10, 25};
	int coins = 0;
	int x;

	for (x = 4; x >= 0; x--)
	{
		if (cents / values[x])
		{
			coins = coins + (cents / values[x]);
			cents = cents - (cents / values[x]) * values[x];
		}
	}
	printf("%d\n", coins);
}

/**
 *main - print the add positive numbers
 * @argc: size the array argv
 * @argv: array that contains the command line arguments
 * Return: 0 is the compile is satisfactory
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 2)
	{
		int cents = atoi(argv[1]);

		for (i = 0; (argv[1])[i] != '\0'; i++)
		{
			if ((argv[1])[i] < '0' || (argv[1])[i] > '9')
			{
				printf("0\n");
				return (0);
			}
		}
		change(cents);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
