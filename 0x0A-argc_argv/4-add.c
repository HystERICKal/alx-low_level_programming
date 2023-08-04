#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * main - adds positive numbers
 * @argc: how many args
 * @argv: arg arr
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int tally;
	int temp;
	int total = 0;

	tally = 1;
	for (; tally < argc; tally++)
	{
		if (check_num(argv[tally]))
		{
			temp = atoi(argv[tally]);
			total = total + temp;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", total);
	return (0);
}
/**
 * check_num - is there a digit?
 * @nums: string
 * Return: 0 or 1
 */
int check_num(char *nums)
{
	unsigned int tally;

	tally = 0;
	for (; tally < strlen(nums); tally++)
	{
		if (!isdigit(nums[tally]))
		{
			return (0);
		}
	}
	return (1);
}
