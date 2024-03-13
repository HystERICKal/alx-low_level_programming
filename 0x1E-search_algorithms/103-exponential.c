#include "search_algos.h"

/**
 * _binary_search - implem bin search algorithm
 * @array: the array first elem pointr
 * @temp: one side
 * @temp2: other side
 * @value: search for dis
 * Return: int val
 */
int _binary_search(int *array, size_t temp, size_t temp2, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);

	while (temp2 >= temp)
	{
		printf("Searching in array: ");
		for (x = temp; x < temp2; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		x = temp + (temp2 - temp) / 2;

		if (array[x] == value)
			return (x);
		if (array[x] > value)
			temp2 = x - 1;
		else
			temp = x + 1;
	}

	return (-1);
}

/**
 * exponential_search - implem exponential search algo
 * @array: the array first elem pointr
 * @size: how big the array is
 * @value: search for this val
 * Return: int value
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t x = 0, the_temp;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (x = 1; x < size && array[x] <= value; x = x * 2)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	}

	the_temp = x < size ? x : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", x / 2, the_temp);
	return (_binary_search(array, x / 2, the_temp, value));
}
