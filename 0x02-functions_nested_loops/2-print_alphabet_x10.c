#include "main.h"


/**
 * print_alphabet_x10 - print alphabet 10x
 */


void print_alphabet_x10(void)
{
	char alph;
	int i = 0;

	/*Loops 10 times*/
	while (i < 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);

		/*New line*/
		_putchar('\n');
		i++;
	}


}
