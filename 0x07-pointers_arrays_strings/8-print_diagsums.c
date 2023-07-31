#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: matrix
 * @size: matrix pointer
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int diag_1, diag_2, i;

	diag_1 = 0;
	diag_2 = 0;

	i = 0;
	while (i < size)
	{
		diag_1 += a[i * size + i];
		i++;
	}

	i = size - 1;
	while (i >= 0)
	{
		diag_2 = diag_2 + a[i * size + (size - i - 1)];
		i--;
	}

	printf("%d, %d\n", diag_1, diag_2);
}
