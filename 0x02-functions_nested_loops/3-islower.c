/**
 * islower - This fuction checks for lowercase character
 *
 * @c: A single character
 *
 * Return: 1 if lowercase or 0 if not
 */
int islower(int c)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (c == n)
		{
			return (1);
		}
	}

	return (0);
}
