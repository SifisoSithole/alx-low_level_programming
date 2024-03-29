#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * write_to_file - This function writes to file
 * @fileFrom: fileFrom
 * @fileTo: fileTo
 * @nm: name
 * @nm2: Name 2
 * @buffer: Buffer
 */
void write_to_file(int fileFrom, char *nm, char *nm2, int fileTo, char *buffer)
{
	int i;
	int noChar1;
	int noChar;

	while (noChar)
	{
		noChar = read(fileFrom, buffer, 1024);
		if (noChar == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", nm);
			exit(98);
		}
		noChar1 = dprintf(fileTo, "%s", buffer);
		if (noChar != noChar1)
		{

			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", nm2);
			exit(99);
		}
		for (i = 0; i < 1025; i++)
			buffer[i] = 0;
	}
}

/**
 * main - entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 1 0n success, -1 on failure
 */
int main(int argc, char *argv[])
{
	char *buffer = malloc(sizeof(char) * 1024);
	int fileFrom, fileTo, no;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileFrom = open(argv[1], O_RDONLY);
	if (fileFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fileTo = open(argv[2], O_TRUNC | O_WRONLY);
	if (fileTo == -1)
		fileTo = creat(argv[2], 0664);
	if (fileTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	write_to_file(fileFrom, argv[1], argv[2], fileTo, buffer);
	no = close(fileFrom);
	if (no == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileFrom);
		exit(100);
	}
	no = close(fileTo);
	if (no == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileTo);
		exit(100);
	}
	free(buffer);
	return (0);
}
