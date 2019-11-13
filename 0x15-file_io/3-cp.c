#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>
#include <fcntl.h>

int copy_info(char *file_from,char *file_to)
{
	int fd_from = 0;
	int fd_to = 0;
	int n_read_from = 0;
	int n_write_to = 0;
	char buffer[1024];


	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
        {
                printf("--error open from--");
        }

	fd_to = open(file_to,O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IWOTH);

	if (fd_to == -1)
	{
		printf("--error open to--");
	}

	n_read_from = read(fd_from, buffer, 1024);

	if(n_read_from == -1)
	{
		printf("error en la lectura");
	}
	n_write_to = write(fd_to, buffer, n_read_from);

	if (n_write_to == -1)
	{
		printf("error en escritura");
		return (-1);
	}

	close(fd_from);
	close(fd_to);


}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = copy_info(av[1], av[2]);
    
    return (0);
}
