#include "main.h"


/**
 * print_number - function that prints an integer
 * @n: integer that is to be printed
 */
void print_number(int n)
{
	unsigned int n1;
	unsigned int check_n1;

	/*Check if number is negative*/
	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		n1 = n;
	}

	check_n1 = n1 / 10;

	/*Check if it is 10 - 19*/
	if ((check_n1))
	{
		print_number(check_n1);
	}


	_putchar((n1 % 10) + '0');
}
