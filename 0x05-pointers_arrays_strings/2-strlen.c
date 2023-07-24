#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: the string we need the length of
 * Return: length of string
 */
int _strlen(char *s)
{
	/*LOS - Length Of String*/
	int LOS = 0;


	while (*s != '\0')
	{
		/*If end of string isn't reached, increment*/
		LOS++;
		s++;
	}


	return (LOS);
}
