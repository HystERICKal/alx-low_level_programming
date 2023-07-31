#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string with prefix substring
 * @accept: prefix substring passed in as reversed pointer
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int i;


	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
			{
				x++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (x);
			i++;
		}
		s++;
	}
	return (x);
}
