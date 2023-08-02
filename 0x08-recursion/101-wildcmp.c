#include "main.h"
/**
 * wildcmp - check if two strings are identical
 * @s1: string 1
 * @s2: string 2
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	/*If string 1 is empty*/
	if (*s1 == '\0')
	{
		/*Check if string 2 is replaced with asterix*/
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		/*string 2 is empty*/
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		/*Check if asterix in s2 is being used to replace a char in s1*/
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		/*Check if character in s1 is same as the one in s2*/
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/*s1 != s2*/
	return (0);
}
