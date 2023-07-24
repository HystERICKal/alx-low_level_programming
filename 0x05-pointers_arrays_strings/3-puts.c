#include "main.h"
/**
 * _puts - function that prints a string
 * @str: the string to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		/*While there's still more letters*/
		_putchar(*str++);
	}
	/*Newline*/
	_putchar('\n');
}

