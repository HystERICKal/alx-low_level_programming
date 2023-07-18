#include "main.h"


/**
 * _islower - checks for lowercase char
 * @charact:  character to be checked
 * Return: 1 if char is lowercase, 0 otherwise
 */


int _islower(int charact)
{
	if (charact >= 'a' && charact <= 'z')
		return (1);
	else
		return (0);
}
