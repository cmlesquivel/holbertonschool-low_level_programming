#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - create a file with the name filename with text_content
 * @filename: file name to create
 * @text_content: content to write into the file
 * Return: -1 if an errors occurs or 1 if satisfactory
 **/

int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int n_write = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	fd = open(filename, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	n_write = write(fd, text_content, strlen(text_content));

	if (n_write == -1)
	{
		return (-1);
	}
	close(fd);

	return (1);
}
