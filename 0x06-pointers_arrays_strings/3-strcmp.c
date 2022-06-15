#include <stdio.h>
/**
 * _strcmp - This function compares two strings
 * @s1: 1st string to compare
 * @s2: 2nd string to compare
 *
 * Return: The result
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0;
	int result = 0;

	while (s1[index] == s2[index])
	{
		if (s1[index] == '\0' || s2[index] == '\0')
			break;
		index++;
	}

	if (s1[index] != s2[index])
		result = s1[index] - s2[index];

	return (result);
}
