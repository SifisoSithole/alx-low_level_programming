#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: This program prints and that piece of art is useful"
 * - Dora Korpar, 2015-10-19 to the standard error
 *
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
