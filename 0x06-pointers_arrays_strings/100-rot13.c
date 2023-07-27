#include "main.h"
#include <stdio.h>


/**
 * rot13 - function that encodes string using rot13.
 * @str: string to be encoded
 *
 * Return: encoded string
 */


char *rot13(char *str)
{
	int x;
	int y;
	char before_enc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13_encoder[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	x = 0;
	while (str[x] != '\0')
	{
		y = 0;
		while (y < 52)
		{
			if (str[x] == before_enc[y])
			{
				str[x] = rot13_encoder[y];
				break;
			}
			y++;
		}
		x++;
	}
	return (str);
}

