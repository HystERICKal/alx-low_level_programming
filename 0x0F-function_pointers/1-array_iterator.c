#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter
 * @array: given array
 * @size: array size
 * @action: pointer to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	/*If there's nothing...*/
	if (array == NULL || action == NULL)
		return;

	while (x < size)
	{
		action(array[x]);
		x++;
	}
}
