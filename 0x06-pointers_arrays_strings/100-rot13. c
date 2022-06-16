/**
 * rot-13 - This function that encodes a string using rot13
 * @s: String to encode
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	char rt13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char letter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int index = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (letter[index] != '\0')
		{
			if (s[i] == letter[index])
			{
				s[i] = rt13[index];
				break;
			}
			index++;
		}
		index = 0;
	}
	return (s);
}
