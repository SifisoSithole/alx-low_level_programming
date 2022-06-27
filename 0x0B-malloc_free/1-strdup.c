#include <stdlib.h>

/**
 * _strdup - This function copies string, returns pointer to the new space
 * @str: Pointer to the string to copy
 *
 * Return: Pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	unsigned int i, len = 0;
	char *buffer;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	buffer = malloc((len + 1) * sizeof(char));
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		buffer[i] = str[i];

	return (buffer);
}
