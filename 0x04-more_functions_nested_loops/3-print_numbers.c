#include "main.h"


/**
 * print_numbers - print 0-9 followed by new line
 * return: nothing
 */


void print_numbers(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
