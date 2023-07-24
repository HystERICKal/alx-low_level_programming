#include "main.h"


/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: elements
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int x;


	x = 0;
	while (x < (n - 1))
	{
		printf("%d, ", a[x]);
		x++;
	}
	if (x == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
