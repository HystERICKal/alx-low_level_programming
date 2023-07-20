#include "main.h"
/**
 * print_triangle - function prints a triangle, followed by new line
 * @size: size of triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;


		i = 1;
		while (i <= size)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}


			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}


			_putchar('\n');
			i++;
		}
	}
}
