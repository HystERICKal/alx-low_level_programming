#include "search_algos.h"

/**
 * binary_search - the binary search algorthm
 * @array: first element pointer
 * @size: element count in array
 * @value: search for this
 * Return: int value
 */
int binary_search(int *array, size_t size, int value)
{
	int temp = size - 1;
	int temp2 = 0;
	int x, buck;

	if (array == NULL)
		return (-1);

	while (temp2 <= temp)
	{
		printf("Searching in array: ");

		for (x = temp2; x <= temp; x++)
		{
			printf("%d", array[x]);
			if (x != temp)
				printf(", ");
			else
				printf("\n");
		}

		buck = (temp2 + temp) / 2;

		if (array[buck] < value)
			temp2 = buck + 1;
		else if (value < array[buck])
			temp = buck - 1;
		else
			return (buck);
	}
	return (-1);
}
