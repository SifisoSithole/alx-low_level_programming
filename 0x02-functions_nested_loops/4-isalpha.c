/**
 * _isalpha - This fuction checks if c is a letter
 *
 * @c: A single character
 *
 * Return: 1 if lowercase or 0 if not
 */
int _isalpha(int c)
{
	char n;

	for (n = 'A'; n <= 'Z'; n++)
	{
		if (c == n)
		{
			return (1);
		}
	}

	for (n = 'a'; n <= 'z'; n++)
	{
		if (c == n)
		{
			return (1);
		}

	return (0);
}
