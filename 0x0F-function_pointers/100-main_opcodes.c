#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcodes of its own main function
 * @argc: arg count
 * @argv: arg array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int bit_8 = atoi(argv[1]), x = 0;
	char *temp = (char *)main;

	/*Number of arguments is not correct...*/
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	/*Number of bit_8 is negative...*/
	if (bit_8 < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (x < bit_8)
	{
		if (x == bit_8 - 1)
		{
			printf("%02hhx\n", temp[x]);
			break;
		}
		printf("%02hhx ", temp[x]);
		x++;
	}
	return (0);
}
