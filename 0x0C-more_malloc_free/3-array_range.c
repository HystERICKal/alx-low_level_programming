#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of ints
 * @min: min values
 * @max: max values
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *new_arr;
	int x = 0, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	new_arr = malloc(sizeof(int) * len);

	if (new_arr == NULL)
		return (NULL);

	while (min <= max)
	{
		new_arr[x] = min++;
		x++;
	}

	return (new_arr);
}

