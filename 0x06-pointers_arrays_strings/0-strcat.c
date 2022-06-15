/**
 * _strlen - This function returns the length of a string
 * @s: String to be counted
 *
 * Return: The number of characters in s
 */
int _strlen(char *s)
{
	int counter = 0, index = 0;

	while (s[index] != '\0')
	{
		counter++;
		index++;
	}
	return (counter);
}

/**
 * _strcat - This function concatenates two strings
 * @dest: The base
 * @src: Pointer to a string to be added to dest
 *
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int lenDest = _strlen(dest);
	int index = 0;

	do {
		dest[lenDest] = src[index];
		lenDest++;
		index++;
	} while (src[index] != '\0');

	return (dest);
}
