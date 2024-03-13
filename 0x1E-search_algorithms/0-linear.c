#include "search_algos.h"


/**
 * linear_search - The linear search algorithm
 * @array: first element pointer
 * @size: element count in array
 * @value: search for this
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x = 0;

	if (array == NULL)
		return (-1);

	while (x < size)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (value == *(array + x))
			return (x);
		x++;
	}
	return (-1);
}
