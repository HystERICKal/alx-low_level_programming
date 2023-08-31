#include "main.h"
/**
 * print_binary - converts to binary
 * @n: the number to convert
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int f = 63;
	int tal = 0;
	unsigned long int stored_here;

	while (f >= 0)
	{
		stored_here = n >> f;

		if (stored_here & 1)
		{
			_putchar('1');
			tal++;
		}
		else if (tal)
			_putchar('0');

		f--;
	}

	if (!tal)
		_putchar('0');
}

