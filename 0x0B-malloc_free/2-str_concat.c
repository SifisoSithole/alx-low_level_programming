#include <stdlib.h>

/**
 * _strlen - This functions counts the length of string
 * @s: pointer to a string
 *
 * Return: Length of string
 */
unsigned int _strlen(char *s)
{
	unsigned int i;

	while (s[i])
		i++;

	return (i);
}

/**
 * str_concat - This function concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: The concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int lenS1;
	unsigned int lenS2;
	unsigned int i;
	unsigned int index;
	char *buffer;

	if (s1 == NULL && s2 == NULL)
	{
		lenS1 = 0;
		lenS2 = 0;
	}
	else
	{
		if (s1 == NULL)
		{
			lenS1 = 0;
			lenS2 = _strlen(s2);
		}
		else
			lenS1 = _strlen(s1);

		if (s2 == NULL && s1 != NULL)
		{
			lenS2 = 0;
			lenS1 = _strlen(s1);
		}
		else
			lenS2 = _strlen(s2);
	}

	buffer = malloc((lenS1 + lenS2 + 1) * sizeof(char));
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < lenS1; i++)
		buffer[i] = s1[i];

	index = i;
	for (i = 0; i < lenS2; i++)
	{
		buffer[index] = s2[i];
		index++;
	}
	return (buffer);
}
