#include "main.h"
/**
 * puts2 - function should print every other character
 * @str: string to be worked on
 * Return: nothing
 */
void puts2(char *str)
{
	/*LOS - Length Of String*/
	int LOS = 0;
	int temp = 0;
	char *l = str;
	int i;


	while (*l != '\0')
	{
		l++;
		LOS++;
	}
	temp = LOS - 1;

	i = 0;
	while (i <= temp)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
