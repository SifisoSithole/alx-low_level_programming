/**
 * _strlen - This function returns the length of a string
 *
 * @s: String to be counted
 *
 * Return: The number of characters in s
 */
int _strlen(char *s)
{
	int counter = 0, index = 0;

	while (s[index] != '\0')
	{
		counter++;
		index++;
	}
	return (counter);
}

/**
 * rev_string - This function prints a string in reverse
 *
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	int index = _strlen(s) - 1, i = 0;
	char tempStr[index + 1];

	while (index >= 0)
	{
		tempStr[i] = s[index];
		index--;
	}

	index = 0;

	while (s[index] != '\0')
	{
		s[index] = tempStr[index];
		index++;
	}

}
