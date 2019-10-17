#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr -  concatenates all the arguments of your program
 * @ac: size of av
 * @av: array that contains the command line arguments
 *
 * Return: nothing
 */

void *argstostr(int ac, char **av)
{
	int i, j, x = 0, counter = 0;
	char *srt;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 1; i < ac; i++)
	{
		for (j = 0; (av[i])[j] != '\0'; j++)
		{
			counter++;
		}
		counter++;
	}

	srt = malloc(sizeof(char) * counter);

	if (srt == NULL)
	{
		return (NULL);
	}

	for (i = 1; i < ac; i++)
	{
		for (j = 0; (av[i])[j] != '\0'; j++)
		{
			srt[x] = (av[i])[j];
			x++;
		}
		srt[x] = '\n';
		x++;
	}
	srt[x] = '\0';
	return (srt);

}
