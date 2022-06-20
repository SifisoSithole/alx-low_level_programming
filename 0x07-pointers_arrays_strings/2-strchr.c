/**
 * _strchr - This function locates a character in a string
 * @s: String to search for character c
 * @c: The character
 *
 * Return: The address of c if found or return NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	if (s[i] == c)
		return (&s[i]);

	return (0);
}
