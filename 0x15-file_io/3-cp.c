#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * copy_info - function that copy a file to other.
 * @file_from: file name from copy
 * @file_to: file name to copy
 * Return: always zero
 **/

void copy_info(char *file_from, char *file_to)
{
int fd_from = 0;
int fd_to = 0;
int n_read_from = 0;
int n_write_to = 0;
char buffer[1024];


fd_from = open(file_from, O_RDONLY);

if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
exit(98);
}

fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC,
S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to  %s\n", file_to);
exit(99);
}
n_read_from = read(fd_from, buffer, 1024);
if (n_read_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
exit(98);

}
n_write_to = write(fd_to, buffer, n_read_from);

if (n_write_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to  %s\n", file_to);
exit(99);
}
close(fd_from);
close(fd_to);
}

/**
 * main - check the code for Holberton School students.
 * @ac: size the array av
 * @av: array that contains the command line arguments
 * Return: Always 0.
 */

int main(int ac, char **av)
{


if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
copy_info(av[1], av[2]);

return (0);
}
