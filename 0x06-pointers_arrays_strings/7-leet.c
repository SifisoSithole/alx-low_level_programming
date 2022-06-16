/**
 * leet - This function encodes a string into 1337
 * @s: String to be encoded
 *
 * Return: The encoded string
 */
char *leet(char *s)
{
	char letters[6] = "aeotl";
	char numbers[6] = "43071";
	int i = 0;
	int index = 0;

	for (i = 0; s[i]; i++)
	{
		while (letters[index] != '\0')
		{
			if (s[i] == letters[index] || s[i] == (letters[index] - 32))
			{
				s[i] = (char) numbers[index];
			}
			index++;
		}
		index = 0;
	}
	return (s);
}
