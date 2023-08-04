#include <stdio.h>
#include "main.h"
/**
 * main - program that prints all arguments it receives
 * @argc: how many arguments
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x = 0;

	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
