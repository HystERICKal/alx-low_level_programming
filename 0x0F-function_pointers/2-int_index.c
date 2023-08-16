#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: given array
 * @size: array size
 * @cmp: pointer to the function
 * Return: index of the first element...or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	/*If there's nothing...*/
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	while (x < size)
	{
		if (cmp(array[x]))
			return (x);
		x++;
	}
	return (-1);
}
