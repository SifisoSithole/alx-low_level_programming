/**
 * strlen - this function returns the lenght of string
 * @s: String to count
 *
 * Return: Lenght of the string
 **/
int _strlen(char *s)
{
	int n = 1;

	if (*s == '\0')
		return (0);

	n = n + _strlen(s + 1);

	return (n);
}
/**
 * wildcard_checker - This function checks accounts for the wildcard in s2
 * @s1: String to compare
 * @s2: String to compare
 * @a: Index of last element of s1
 * @s2: Index of last element of s2
 *
 * Return: 1 if the asterick matches s1
 */
int wildcard_checker(char *s1, char *s2, int a, int b, int c)
{
	if (c == 0)
		return (0);

	if (s2[b] == '*')
		return (1);

	if (s1[a] != s2[b])
		return (0);

	c = wildcard_checker(s1, s2, a - 1, b - 1, c);
	
	return (c);
}

/**
 * compare_string - This function compares the two strings
 * @s1: String to compare
 * @s2: String to compare
 * @a: Index of s1
 * @b: Index of s2
 *
 * Return: 1 if it matches or 0 if not
 */
int compare_string(char *s1, char *s2, int a, int b, int c, int d, int e)
{

	if (c == 0)
		return (0);

	if (a > d)
		a = d;

	if (b > e)
		b = e;

	if (a == d && b == e)
		return (1);

	if (s2[b] == '*')
		c = wildcard_checker(s1, s2, d - 1, e - 1, c);
	else
		c = compare_string(s1, s2, a + 1, b + 1, c, d, e);

	return (c);
}

/**
 * wildcmp - This function compares two strings
 * @s1: String to compare
 * @s2: String to compare
 *
 * Return: Return 1 if the string can be considered identical or 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	int result;
	int d = _strlen(s1);
	int e = _strlen(s2);

	result = compare_string(s1, s2, 0, 0, 1, d, e);

	return (result);
}
