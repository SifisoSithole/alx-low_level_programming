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
 * _strncpy - This function copies src into dest up to n characters
 * @dest: The destination
 * @src: Pointer to a string to be copied
 * @n: The number of bytes to be copied to dest from src
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int lenSrc = _strlen(src);
	int i;

	for (i = 0; i < n; i++)
	{
		if (i > lenSrc)
			break;
		dest[i] = src[i];
	}
	return (dest);
}
