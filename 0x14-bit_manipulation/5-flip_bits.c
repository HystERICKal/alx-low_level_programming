#include "main.h"
/**
 * flip_bits - flip how many bits to change numbers?
 * @n: one number
 * @m: other number
 * Return: flipped bits count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int stored_here;
	int f = 63;
	unsigned long int select = n ^ m;
	int tal = 0;

	while (f >= 0)
	{
		stored_here = select >> f;
		if (stored_here & 1)
			tal++;
		f--;
	}

	return (tal);
}
