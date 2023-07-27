#include "main.h"
/**
 * leet - encode string into 1337
 * @s: string to be encoded
 * Return: encoded string
 */
char *leet(char *s)
{
	int x, y;
	char set_letters[] = "aAeEoOtTlL";
	char set_digits[] = "4433007711";

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (y < 10)
		{
			if (s[x] == set_letters[y])
			{
				s[x] = set_digits[y];
			}
			y++;
		}
		x++;
	}
	return (s);
}
