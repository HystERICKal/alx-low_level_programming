#include "main.h"
/**
 * get_bit - computes bit value at given index
 * @n: the num
 * @index: the given index
 * Return: the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val_of_a_bit;
	unsigned int num;

	num = 63;

	if (index > num)
		return (-1);

	val_of_a_bit = (n >> index) & 1;

	return (val_of_a_bit);
}
