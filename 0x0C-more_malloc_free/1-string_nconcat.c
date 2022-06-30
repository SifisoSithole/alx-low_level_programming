#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - This function returns string length
 * @s: String
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * string_nconcat - This function concatenates two strings
 * @s1: Base string
 * @s2: String to add
 * @n: Number of bytes from s2
 *
 * Return: Pointer to the newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lenS1;
	unsigned int lenS2;
	unsigned int i, index;
	char *conS;

	if  (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	lenS1 = _strlen(s1);
	lenS2 = _strlen(s2);

	if (n > lenS2)
		n = lenS2;

	conS = malloc(sizeof(char) * (lenS1 + n + 1));
	if (conS == NULL)
		return (NULL);

	for (i = 0; i < lenS1; i++)
		conS[i] = s1[i];

	index = i;
	for (i = 0; i < n; i++)
	{
		conS[index] = s2[i];
		index++;
	}
	conS[index] = '\0';

	return (conS);
}
