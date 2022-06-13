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
 * test_for_digit - This function tests if a charecter is a digit
 * @c: character to converted
 *
 * Return: Digit
 */
int test_for_digit(char c)
{
	switch (c)
	{
		case '-':
			return (-1);
		case 48:
			return (0);
		case 49:
			return (1);
		case 50:
			return (2);
		case 51:
			return (3);
		case 52:
			return (4);
		case 53:
			return (5);
		case 54:
			return (6);
		case 55:
			return (7);
		case 56:
			return (8);
		case 57:
			return (9);
	}
	return (-2);
}

/**
 * _atoi - This function converts string to integer
 * @s: String to be converted
 *
 * Return: an integer
 */
int _atoi(char *s)
{
	int noElements = _strlen(s), total = 0, i, result, negative = 0;

	for (i = 0; i < noElements; i++)
	{
		if (s[i] == ' ' || s[i] == '+')
			continue;

		if (s[i] == '-' && test_for_digit(s[i + 1]) == -2)
			continue;

		result = test_for_digit(s[i]);

		if (result == -2)
			continue;
		else if (result == -1)
			negative = 1;
		else
			total = (total * 10) + result;
	}
	if (negative == 1)
		total = total * -1;
	return (total);
}
