#include "search_algos.h"

/**
 * interpolation_search - implem of interpolation search.
 * @array: the array first value pointer
 * @size: how big the array is
 * @value: Tsearch for this val
 * Return: int val
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t x, y = 0, z = size - 1;

	if (array == NULL)
		return (-1);

	while (z >= y)
	{
		x = y + (((double)(z - y) / (array[z] - array[y])) * (value - array[y]));
		if (x < size)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", x);
			break;
		}

		if (array[x] == value)
			return (x);
		if (array[x] > value)
			z = x - 1;
		else
			y = x + 1;
	}

	return (-1);
}
