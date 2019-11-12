#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name to read and write
 * @letters: count of characters to read and write
 * Return: -1 if an errors occurs
 **/


ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = malloc(letters);
	int fd = 0;
	int n_write = 0;
	int n_read = 0;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	n_read = read(fd, buf, letters);

	if (n_read == -1)
	{
		return (0);
	}

	buf[letters] = '\0';

	n_write = write(STDOUT_FILENO, buf, n_read);

	if (n_write == -1)
	{
		return (0);
	}
	close(fd);
	free(buf);

	return (n_write);
}
