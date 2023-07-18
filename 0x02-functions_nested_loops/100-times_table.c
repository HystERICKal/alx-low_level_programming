#include "main.h"


/**
 * print_times_table - prints the n times table
 * @n: times table to print
 */
void print_times_table(int n)
{
	int i, j, k;

	/*Just like the times nine one with a few modifications*/
	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = j * i;
				if (j == 0)
				{
					_putchar(k + '0');
				} else if (k < 10 && j != 0)
				{
					/*Triple space after single digits*/
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				} else if (k >= 10 && k < 100)
				{
					/*Double space after double digits*/
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					/**
					 *i.e for 81
					 * 81 /10 = 8
					 * 81 % 10 = 1
					 * 81 will be printed
					 */
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				} else if (k >= 100)
				{
					/*Single space after triple digits*/
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
