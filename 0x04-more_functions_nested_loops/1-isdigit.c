#include "main.h"


/**
 * _isdigit - check for digit 0 - 9
 * @c: character to be checked
 *
 * Return: 1 if isdigit and 0 if not
 */


int _isdigit(int c)
{
	/*Check if character is 0-9*/
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
