#include "main.h"
/**
 * _puts_recursion -  prints a string, followed by a new line
 * @s: string to be printed
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	/*If there's still a string character left*/
	if (*s)
	{
		/*Print it*/
		_putchar(*s);
		/*Increment and call the function*/
		_puts_recursion(s + 1);
	}


	else
		_putchar('\n');
}

