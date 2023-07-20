#include <stdio.h>
#include <math.h>

/**
 * main - Prime factors
 * Return: 0
 */
int main(void)
{
	long int num;
	long int largest;
	long int x;


	num = 612852475143;
	largest = -1;


	while (num % 2 == 0)
	{
		largest = 2;
		num /= 2;
	}

	x = 3;
	while (x <= sqrt(num))
	{
		while (num % x == 0)
		{
			largest = x;
			num = num / x;
		}
		x = x + 2;
	}


	if (num > 2)
		largest = num;


	printf("%ld\n", largest);


	return (0);
}
