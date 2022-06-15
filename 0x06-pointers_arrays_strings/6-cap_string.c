/**
 * cap_string - This function capitalizes all words
 * @s: String to be changed
 *
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (!(s[i - 1] >= 65 && s[i - 1] <= 90))
			{
				if (!(s[i - 1] >= 97 && s[i - 1] <= 122))
					s[i] = s[i] - 32;
			}
		}
		i++;
	}
	return (s);
}
