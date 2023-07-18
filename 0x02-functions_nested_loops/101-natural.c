#include <stdio.h>


/**
 * main - natural numbers
 *
 * Return: 0
 */
int main(void)
{
	int i, total = 0;


	i = 0;
	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			total += i;
		i++;
	}


	printf("%d\n", total);


	return (0);
}
