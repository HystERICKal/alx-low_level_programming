#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string in question
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	/*LOS - Length Of String*/
	int LOS = 0;

	/*If there's more characters in the string*/
	if (*s)
	{
		/*Increment Length Of String*/
		LOS++;
		LOS = LOS + _strlen_recursion(s + 1);
	}


	return (LOS);
}

