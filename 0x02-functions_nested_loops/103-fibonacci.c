#include <stdio.h>


/**
 * main - total of even-valued terms in fibonnaci
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int j, k, term, total;


	j = 1;
	k = 2;
	total = 0;



	i = 1;
	while (i <= 33)
	{
		/*terms not exceeding 4000000*/
		if (j < 4000000 && (j % 2) == 0)
		{
			total = total + j;
		}
		/*next term*/
		term = j + k;
		j = k;
		k = term;

		++i;
	}


	printf("%lu\n", total);


	return (0);
}
