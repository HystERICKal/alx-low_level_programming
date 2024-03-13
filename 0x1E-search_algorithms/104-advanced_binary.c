#include "search_algos.h"

/**
 * advanced_binary_recursive - the adv bin recursive algo
 * @array: the array first element pointer
 * @temp: one side
 * @temp2: other side
 * @value: searching fir this
 * Return: int value
 */
int advanced_binary_recursive(int *array, size_t temp, size_t temp2, int value)
{
	size_t x = temp;

	if (temp2 < temp)
		return (-1);

	printf("Searching in array: ");

	while (x < temp2)
	{
		printf("%d, ", array[x]);
		x++;
	}

	printf("%d\n", array[x]);

	x = temp + (temp2 - temp) / 2;

	if (array[x] == value && (x == temp || array[x - 1] != value))
		return (x);

	if (array[x] >= value)
		return (advanced_binary_recursive(array, temp, x, value));

	return (advanced_binary_recursive(array, x + 1, temp2, value));
}

/**
 * advanced_binary - the advanced binary algorthm
 * @array: the array
 * @size: how big is this array
 * @value: searching for this
 * Return: int value
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
