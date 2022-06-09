/**
 * _isupper - This functions checks for uppercase characters
 * @c: Character to be tested
 * Return: 1 if c is uppercase or 0 if not
 */
int _isupper(int c)
{
	char i;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
