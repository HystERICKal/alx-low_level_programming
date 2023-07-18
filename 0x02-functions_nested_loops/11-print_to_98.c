#include <stdio.h>
#include "main.h"


/**
 * print_to_98 - prints all natural numbers from n to 98,
 * @n: starting number
 */
void print_to_98(int n)
{
	int i, j;


	/*If n is less than 98 increment*/
	if (n <= 98)
	{
		i = n;
		while (i <= 98)
		{
			/*Keep adding comma*/
			if (i != 98)
				printf("%d, ", i);
			/*Add a new line after*/
			else if (i == 98)
				printf("%d\n", i);
			i++;
		}
	} else if (n >= 98)
	{
		/*If n is larger than 98 decrement*/
		j = n;
		while (j >= 98)
		{
			/*Keep adding comma*/
			if (j != 98)
				printf("%d, ", j);
			/*Add a new line after*/
			else if (j == 98)
				printf("%d\n", j);
			j--;
		}
	}
}
