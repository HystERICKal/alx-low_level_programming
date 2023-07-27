#include "main.h"


/**
 * print_number - function that prints an integer
 * @n: integer to be printed
 * Return: nothing
 */


void print_number(int n)
{
	unsigned int temp = n;

	/*Deal with negative numbers*/
	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}

	if (temp / 10)
	{
		print_number(temp / 10);
	}
	_putchar((temp % 10) + '0');
}

