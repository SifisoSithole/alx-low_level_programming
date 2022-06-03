#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: This program evaluetes a random number stored in n.
 * If the number is greater than 0, it prints "is positive". If the number is 0
 * it prints "is zero". If  the number is less than 0, it prints "is negative"
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		char message[] = "is positive";

	if (n == 0)
		char message[] = "is zero";

	if (n < 0)
		char message[] = "is negative";

	printf("%d %s\n", n, message);
	return (0);
}
