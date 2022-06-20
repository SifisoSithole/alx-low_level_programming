/**
 * _strspn - This fuction gets the length of a prefix substring
 * @s: Address of the string to search
 * @accept: Bytes to search in s
 *
 * Return: The number of bytes from accept in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int index;
	unsigned int noChar = 0;

	i = 0;
	while (s[i] != ' ')
	{
		for (index = 0; accept[index]; index++)
		{
			if (s[i] == accept[index])
				noChar++;
		}
		i++;
	}
	return (noChar);
}
