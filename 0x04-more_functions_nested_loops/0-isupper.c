#include "main.h"


/**
 * _isupper - checks for uppercase
 * @c: character to check
 *
 * Return: 0 or 1 depending on the casing of c
 */


int _isupper(int c)
{
	/* Go through A-Z to check if char is present*/
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
