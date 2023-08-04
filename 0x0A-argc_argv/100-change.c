#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Minimal Number of Coins for Change
 * @argc: how many arguments
 * @argv: args array
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int str_to_int, x, coins;
	int coin_values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	str_to_int = atoi(argv[1]);
	coins = 0;

	if (str_to_int < 0)
	{
		printf("0\n");
		return (0);
	}

	x = 0;
	while (x < 5 && str_to_int >= 0)
	{
		while (str_to_int >= coin_values[x])
		{
			coins++;
			str_to_int = str_to_int - coin_values[x];
		}
		x++;
	}

	printf("%d\n", coins);
	return (0);
}
