
#include "main.h"

/**
 * _atoi - function that converts a string to an int
 * @s: string to be converted to int
 *
 * Return: int derived from string
 */
int _atoi(char *s)
{
	int x, m, v, temp, num_counter, num;

	x = 0;
	m = 0;
	v = 0;
	temp = 0;
	num_counter = 0;
	num = 0;

	for ( ; s[temp] != '\0'; temp++)
	{
		continue;
	}

	for ( ; x < temp && num_counter == 0; x++)
	{
		if (s[x] == '-')
			++m;


		if (s[x] >= '0' && s[x] <= '9')
		{
			num = s[x] - '0';
			if (m % 2)
				num = -num;
			v = v * 10 + num;
			num_counter = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			num_counter = 0;
		}

	}

	/*No numbers in the string*/
	if (num_counter == 0)
		return (0);


	return (v);
}

