#include "main.h"


/**
 * _isalpha - checks for alphabetic character
 * @charact: character to be checked
 * Return: 1 if character is a letter, 0 otherwise
 */
int _isalpha(int charact)
{
	if ((charact >= 'a' && charact <= 'z') || (charact >= 'A' && charact <= 'Z'))
		return (1);
	else
		return (0);
}
