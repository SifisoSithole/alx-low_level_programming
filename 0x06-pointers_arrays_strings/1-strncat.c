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
 * _strncat - This function concatenates two strings up to n characters
 * @dest: The base
 * @src: Pointer to a string to be added to dest
 * @n: The number of bytes to be add to dest from src
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int lenDest = _strlen(dest);
	int lenSrc = _strlen(src);
	int i;

	for (i = 0; i < n; i++)
	{
		if (i > lenSrc)
			break;
		dest[lenDest] = src[i];
		lenDest++;
	}
	return (dest);
}
