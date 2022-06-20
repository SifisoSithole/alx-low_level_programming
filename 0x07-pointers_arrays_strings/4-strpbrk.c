/**
 * _strpbrk - This fuction searches a string for any of a set of bytes
 * @s: Address of the string to search
 * @accept: Bytes to search in s
 *
 * Return: The address of the byte that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int index;

	i = 0;
	while (s[i] != '\0')
	{
		for (index = 0; accept[index]; index++)
		{
			if (s[i] == accept[index])
				return (&s[i]);
		}
		i++;
	}
	return (0);
}
