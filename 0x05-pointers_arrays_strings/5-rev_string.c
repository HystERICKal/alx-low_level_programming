#include "main.h"


/**
 * rev_string - Function that reverses a string
 * @s: string to be reversed
 * Return: nothing
 */


void rev_string(char *s)
{
	char s_revrs = s[0];
	int temp = 0;
	int x;


	while (s[temp] != '\0')
		temp++;

	x = 0;
	while (x < temp)
	{
		temp--;
		s_revrs = s[x];
		s[x] = s[temp];
		s[temp] = s_revrs;
		x++;
	}
}

