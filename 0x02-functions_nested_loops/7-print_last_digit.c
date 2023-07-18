#include "main.h"


/**
 * print_last_digit - print last digit of number
 * @numb: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int numb)
{
	int last_digit;


	if (numb < 0)
		numb = -1 * numb;


	last_digit = numb % 10;


	_putchar(last_digit + '0');


	return (last_digit);
}
