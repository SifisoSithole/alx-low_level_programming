/**
 * cap_string - This function capitalizes all words
 * @s: String to be changed
 *
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i = 0, a;
	char p[14] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{'};

	p[13] = '}';

	while (s[i] != '\0')
	{
		for (a = 0; p[a]; a++)
		{
			if (s[i] == p[a])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
				{
					s[i + 1] = s[i + 1] - 32;
					break;
				}
			}
		}
		i++;
	}
	return (s);
}
