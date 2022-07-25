#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - This function appends text at the end of the file
 * @filename: Name of the file to append
 * @text_content: String to append
 *
 * Return: 1 0n success, -1 on failer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	while (text_content[i])
		i++;
	i = write(fd, text_content, i);
	if (i == -1)
		return (-1);
	else
		return (1);
}
