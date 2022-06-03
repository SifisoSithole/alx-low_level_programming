#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: This program evaluates the last digit of a
 * random number stored in n, and displays an appropriate message
 *
 * Return: Always 0
 */
int main(void)
{
	int n, lstDigit;
	char msg[30];

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lstDigit = n % 10;
	if (lstDigit > 5)
	{
		strcpy(msg, "and is greater than 5");
	}

	if (lstDigit == 0)
	{
		strcpy(msg, "and is 0");
	}

	if (lstDigit < 6)
	{
		strcpy(msg, "and is less than 6 and not 0");
	}

	printf("Last digit of %d is %d %s\n", n, lstDigit, msg);
	return (0);
}
