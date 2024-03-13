#include "search_algos.h"

/**
 * jump_search - implementation of Jump search algorithm
 * @array: integer array
 * @size: how big array is
 * @value: search this value
 * Return: int
 */

int jump_search(int *array, size_t size, int value)
{
	size_t x = 0, go_to = 0, the_next;

	if (array == NULL || size == 0)
		return (-1);

	the_next = sqrt(size);

	while (go_to < size && array[go_to] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", go_to, array[go_to]);
		x = go_to;
		go_to = go_to + the_next;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", x, go_to);

	go_to = go_to < size - 1 ? go_to : size - 1;

	while (x < go_to && array[x] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		x++;
	}

	printf("Value checked array[%ld] = [%d]\n", x, array[x]);

	return (array[x] == value ? (int)x : -1);
}
