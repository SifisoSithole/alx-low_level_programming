#include <sys/types.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * create_file - This function creates a file
 * @filename: Name of the file to create
 * @text_content: Content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int noChars, i = 0;

	if (!filename || *filename == '\0')
		return (-1);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		fd = creat(filename, 0600);
	else
	{
		close(fd);
		fd = open(filename, O_WRONLY | O_TRUNC);
	}
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
		noChars = write(fd, text_content, i);
	}
	if (noChars == -1)
		return (-1);
	else
		return (1);
}
