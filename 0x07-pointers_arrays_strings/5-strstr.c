/**
 * strstr - This function locates a substring
 * @haystack: Pointer to the string to search in
 * @needle: substring to search in haystack
 *
 * Return: returns pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int index = 0;
	int lenNeedle = 0;
	int noMatches = 0;
	char *begining = haystack;

	while (needle[lenNeedle])
		lenNeedle++;


	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == ' ')
		{
			index = 0;
			noMatches = 0;
			begining = &haystack[i + 1];
			continue;
		}

		if (haystack[i] == needle[index])
			noMatches++;

		if (noMatches == lenNeedle)
			return (begining);
		index++;
	}
	return (0);
}
