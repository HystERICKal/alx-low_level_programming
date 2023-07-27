#include "main.h"
/**
 * reverse_array - reverses content of an array of integers
 * @a: array of integegrs
 * @n: number of elements of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int x;
	int temp;

	x = 0;
	while (x < n--)
	{
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
		x++;
	}
}

