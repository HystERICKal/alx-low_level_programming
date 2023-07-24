#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: string to be printed in reverse
 * return: nothing
 */
void print_rev(char *s)
{
	/*LOS - Length Of String*/
	int LOS = 0;

	/*Counter*/
	int i;


	while (*s != '\0')
	{
		LOS++;
		s++;
	}
	s--;

	i = LOS;
	while (i > 0)
	{
		_putchar(*s);
		s--;
		i--;
	}


	_putchar('\n');
}
