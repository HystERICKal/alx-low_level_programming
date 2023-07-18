#include <stdio.h>


/**
 * main - print Fibonacci sequence
 *
 * Return: 0.
 */
int main(void)
{
	int i;
	unsigned long j = 0, k = 1, total;

	i = 0;

	while (i < 50)
	{
		total = j + k;
		printf("%lu", total);

		j = k;
		k = total;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
		i++;
	}


	return (0);
}
