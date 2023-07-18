#include <stdio.h>


/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return:  0
 */


int main(void)
{
	unsigned long int j;
	unsigned long int prev = 1;
	unsigned long int next = 2;
	unsigned long int huge_num = 1000000000;
	unsigned long int prev1;
	unsigned long int prev2;
	unsigned long int next1;
	unsigned long int next2;


	printf("%lu", prev);



	j = 1;
	while (j < 91)
	{
		printf(", %lu", next);
		next += prev;
		prev = next - prev;
		j++;
	}


	prev1 = (prev / huge_num);
	prev2 = (prev % huge_num);
	next1 = (next / huge_num);
	next2 = (next % huge_num);


	j = 92;
	while (j < 99)
	{
		printf(", %lu", next1 + (next2 / huge_num));
		printf("%lu", next2 % huge_num);
		next1 = next1 + prev1;
		prev1 = next1 - prev1;
		next2 = next2 + prev2;
		prev2 = next2 - prev2;
		++j;
	}
	printf("\n");
	return (0);
}
