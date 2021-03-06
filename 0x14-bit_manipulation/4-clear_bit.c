/**
 * clear_bit - This function clears the bit at index to 0
 * @n: Number to change
 * @index: Index of the bit to clear
 *
 * Return: 1 on sucess or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);


	*n &= ~(1 << index);
	return (1);
}
