#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - his function reads a text file and prints it to the POSIX
 *  standard output
 * @filename: Name of the file to print
 * @letters: Number of letters it should read and print
 *
 * Return: The number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t res;
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t noChars;

	if (!buffer)
		return (0);
	if (!filename || *filename == '\0')
	{
		free(buffer);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	noChars = read(fd, buffer, letters);
	if (noChars == -1)
	{
		free(buffer);
		return (0);
	}

	res = write(STDERR_FILENO, buffer, noChars);
	if (res == -1 || res != noChars)
	{
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);

	return (res);
}
