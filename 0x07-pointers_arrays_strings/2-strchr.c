#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to locate in string s
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
