#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: file name
 * @text_content: content to add to the file
 * Return: -1 if an errors occurs or 1 if satisfactory
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	int n_write = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_APPEND | O_RDWR);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	n_write = write(fd, text_content, strlen(text_content));

	if (n_write == -1)
	{
		return (-1);
	}
	close(fd);

	return (1);
}
