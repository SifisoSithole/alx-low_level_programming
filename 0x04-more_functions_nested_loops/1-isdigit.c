/**
 * _isdigit - This functions checks for digits
 * @c: Character to be tested
 * Return: 1 if c is digit or 0 if not
 */
int _isdigit(int c)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
