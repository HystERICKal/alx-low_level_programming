#include "main.h"


/**
 * print_diagonal - uses \ to draw a diagonal line
 * @n: no. of times the character \ should be printed
 */


void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;


		i = 0;
		while (i < n)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
			i++;
		}
	}
}
