#include <stdio.h>
#include "main.h"
/**
 * str_to_int - string to int conversion
 * @str: string
 * Return: int
 */
int str_to_int(char *str)
{
	int x, y, z, sz, l, num;

	y = 0;
	z = 0;
	l = 0;
	num = 0;

	for (sz = 0; str[sz] != '\0'; sz++)
	{
		continue;
	}

	for (x = 0; x < sz && l == 0; x++)
	{
		if (str[x] == '-')
			++y;

		if (str[x] >= '0' && str[x] <= '9')
		{
			num = str[x] - '0';
			if (y % 2)
				num = -num;
			z = z * 10 + num;
			l = 1;
			if (str[x + 1] < '0' || str[x + 1] > '9')
				break;
			l = 0;
		}
	}

	if (l == 0)
		return (0);

	return (z);
}

/**
 * main - multpiplier
 * @argc: how many args
 * @argv: arg array
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int mult, a, b;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	a = str_to_int(argv[1]);
	b = str_to_int(argv[2]);
	mult = a * b;

	printf("%d\n", mult);
	return (0);
}
