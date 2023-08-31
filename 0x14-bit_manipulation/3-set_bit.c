#include "main.h"
/**
 * set_bit - this one sets bit value to 1 at given index
 * @n: the num
 * @index: the given index
 * Return: 1 or -1 (for success or error)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	num = 63;

	if (index > num)
		return (-1);

	*n = ((00000000000000000000000000000001 << index) | *n);
	return (1);
}
