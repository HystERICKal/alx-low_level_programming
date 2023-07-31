#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int x;


	while (*s)
	{
		x = 0;
		while (accept[x])
		{
			if (*s == accept[x])
				return (s);
			x++;
		}
		s++;
	}


	return ('\0');
}
