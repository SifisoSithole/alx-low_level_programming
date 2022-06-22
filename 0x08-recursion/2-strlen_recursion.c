/**
 * _strlen_recursion - this function returns the lenght of string
 * @s: String to count
 *
 * Return: Lenght of the string
 */
int _strlen_recursion(char *s)
{
	int n = 1;

	if (*s == '\0')
		return (0);

	n = n + _strlen_recursion(s + 1);

	return (n);
}
