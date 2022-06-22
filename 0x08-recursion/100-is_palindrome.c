/**
 * _strlen - this function returns the lenght of string
 * @s: String to count
 *
 * Return: Lenght of the string
 */
int _strlen(char *s)
{
	int n = 1;

	if (*s == '\0')
		return (0);

	n = n + _strlen(s + 1);

	return (n);
}

/**
 * compare_str - compares string
 * @s: string
 * @len: length of string
 *
 * Return: 1 if true or 0 if false
 */
int compare_str(char *s, int len)
{
	if (*s != *(s + len))
		return (0);

	if (*s == '\0')
		return (1);

	return (compare_str(s + 1, len - 2));
}

/**
 * is_palindrome - Tests if string is palindrome
 * @s: string to test
 *
 * Return: 1 if true or 0 if false
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen(s) - 1;
	return (compare_str(s, len));
}
