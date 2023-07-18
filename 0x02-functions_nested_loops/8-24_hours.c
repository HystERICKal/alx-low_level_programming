#include "main.h"


/**
 * jack_bauer - print every minute of the day
 */
void jack_bauer(void)
{
	int i, j;


	i = 0;


	while (i < 24)
	{

		for (j = 0; j < 60; j++)
		{       /* The division ensures we get
			 * 0 - 2 for digit 1 of the hours and
			 * 0 - 5 for digit 1 of the minutes
			 *
			 * The modulo ensures we get 0 - 9
			 */
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');

		}
		i++;
	}
}
