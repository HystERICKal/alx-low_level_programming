#include "main.h"

/**
 * is_palindrome - is the string palindrome?
 * @s: The string
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	/*empty string is a palindrome*/
	if (*s == 0)
		return (1);
	/*Check for palindrome!*/
	return (palindrome_detector(s, 0, length_of_string_calculator(s)));
}

/**
 * length_of_string_calculator - returns length of string
 * @s: The string
 *
 * Return: how long the string is
 */
int length_of_string_calculator(char *s)
{
	/*Empty string!*/
	if (*s == '\0')
		return (0);
	/*Keep going till length is found!*/
	return (1 + length_of_string_calculator(s + 1));
}

/**
 * palindrome_detector - recursion galore
 * @s: The string
 * @x: increment this
 * @los: (acronym) length of string
 *
 * Return: 1 or 0
 */
int palindrome_detector(char *s, int x, int los)
{
	/*Compare front and back letters*/
	/*If you get to letters that aren't the same*/
	/*Not palindrome!!!*/
	if (*(s + x) != *(s + los - 1))
		return (0);
	/*Palindrome!!!!!!!!!!!!!!!!!!!*/
	if (x >= los)
		return (1);
	/*Keep going!*/
	return (palindrome_detector(s, x + 1, los - 1));
}

