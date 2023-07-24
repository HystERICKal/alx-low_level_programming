#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: string to be split in half
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, temp, LOS;


	LOS = 0;


	i = 0;
	while (str[i] != '\0')
	{
		LOS++;
		i++;
	}



	temp = (LOS / 2);


	if ((LOS % 2) == 1)
		temp = ((LOS + 1) / 2);


	i = temp;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
